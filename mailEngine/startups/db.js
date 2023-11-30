const mongoose = require("mongoose");

let config = require("config");

module.exports = ()=>{

    let db = config.get("db");

    mongoose.connect(db,{ useNewUrlParser: true, useUnifiedTopology: true })
            .then(()=>console.info(`successfully connected to the  ${db} database.`))
            .catch(()=>console.info("error occured while estalishing connection."))

}