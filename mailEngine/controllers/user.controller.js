const express = require('express')

const { userModel  } = require("../models/users.model");

const { sendEmailForGmail, sendEmail } =require("../helpers/utilities/mailer");


/**
 * register user Api
 * 
 */
exports.registerUser = async ( req,res ) => {
try {
    
    let { firstname:name, email, password } = req.body;    
    //validations
    // let { error } = validateRegistration(req.body);

    // if (error)   return res.status(400).send({msg:error.details[0].message})
    //generate salt 
   
    let user=await userModel.findOne({email:email});
    
    if(user) return res.status(400).send({msg:'email is already exist'})
   
    // let hash = await hashPassword(password , 10); 

    // req.body.password = hash;
    //save data into database
    let userdata =  await userModel(req.body).save();

    // delete userdata.user.password;
    
    // let token = await encodeToken(userdata);

    console.log(email,name);
    sendEmailForGmail(email,name);
    
    return res.status(201).send({msg:`User Register Sucess`,userdata})
        // return SEND_RESPONSE(res,[],MESSAGE.USER_REGISTER,STATUS_CODE.CREATED);

} catch (error) {
    return res.status(500).send({error:error})
}
}


/**
 * login Api
 */
exports.loginUser= async( req,res )=>{
    try {
    
        //extract data
          let { email , password } = req.body;        

          //validations
          let { error } = validateLoginUser(req.body);
        
          if (error)return res.status(400).send({msg:error.details[0].message})
          
         //check user exists or not. and also check that user is verfied or not
          let user = await userModel.findOne({$and:[{email:email,isVerified:true}]});
          
          if( !user ) return res.status(404).send({msg:'Please check your mail to verify User'})

          //compare passwords 
          let validate = await compareHash(password, user.password );  

          if(!validate) return res.status(400).send({msg:"Either email or password not correct."});

          //generate jwt
           token = generateJWT( user , { expiresIn: 60 * 60 });
           
           return res.status(201).send({msg:'Loging In Sucess'})
        
    } catch (error) {
        
        res.send(error.Message);
        console.log(error.Message);
        
    }
}

