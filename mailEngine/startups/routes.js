const express = require("express");

const user = require("../routes/user.route");

module.exports =(app)=>{

    app.use(express.json());
    app.use(express.urlencoded({extended:true, limit:"50mb"}));

    app.use('/user',user);
}


