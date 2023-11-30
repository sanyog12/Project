const mongoose = require("mongoose");

let config = require("config");

module.exports = ()=>{

    let db = config.get("db");

    mongoose.connect('mongodb://0.0.0.0:27017/dev',{ useNewUrlParser: true, useUnifiedTopology: true })
            .then(()=>console.info(`successfully connected to the  ${db} database.`))
            .catch((e)=>console.info("error occured while estalishing connection.",e.message))

}