package net.javaGuids.springboot.controller;

import net.javaGuids.springboot.kafka.JsonKafkaProducer;
import net.javaGuids.springboot.kafka.KafkaProducer;
import net.javaGuids.springboot.payload.User;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/api/v1/kafka")

public class JsonMessageController{

    private JsonKafkaProducer jsonkafkaProducer;

    public JsonMessageController(JsonKafkaProducer kafkaProducer) {
        this.jsonkafkaProducer = kafkaProducer;
    }

    @PostMapping("/publisher")
    public ResponseEntity<String> publish(@RequestBody User user){
        jsonkafkaProducer.sendMessage(user);
        return ResponseEntity.ok("Json message sent to kafka topic");
    }
}
