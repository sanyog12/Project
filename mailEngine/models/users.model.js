const mongoose = require("mongoose");

const userModel = mongoose.model("users",new mongoose.Schema({
    firstname:{type:String},
    lastname:{type:String},
    email:{type:String},
    password:{type:String},
    gender:{type:String},
    city:{type:String},
    country:{type:String},
    isVerified:{type:Boolean, default:false}
},{
    timestamps:true
}))
 

module.exports = {
    userModel
 }