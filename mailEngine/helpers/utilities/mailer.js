'use strict';

const nodemailer = require("nodemailer");
const { ecommerceTemp }=require('../../views/email')
// const smtpTransport = require('nodemailer-smtp-transport');
const fs = require('fs');
const config = require("config");
const {auth,port,host}=config.get('emailCredentials');

// const sendEmail =  (FROM_ADDRESS, toAddress, subject, content, next)=>{
//     const { auth, port , host, service } = config.get("emailCredentials") ;

//     const transport = nodemailer.createTransport(smtpTransport({
//         host:host,
//         port:port,
//         auth
//     }));

//     const mailOptions = {
//         from:  "postmaster@eeshana.com" ,
//         to: "akshaydhawle531@gmail.com",
//         subject: "Verification ",
//         text:'Visit this http://localhost:8484/user/verifyEmail/'+token,
//         html: '<a href="http://localhost:8484/user/verifyEmail/'+token+'"><H2>Click on this</H2></a>'
//     };
//     transport.sendMail(mailOptions,function(err,email_data){
//         if(err){
//             console.log(err);
//             res.json(err);
//         }else{
//             console.log("Email is Sent",email_data);
//             res.json({result : 1});
//         }
//     });
  

// };

const sendEmailForGmail =  (toAddress,name='user')=>{
try {
    
    const transport = nodemailer.createTransport({
        service : "Gmail",
        auth:{
            "user":auth.user,
            "pass":auth.pass
        }
    });

    var mailOptions = {
        from:auth.user,
        to: toAddress,
        subject: "The sale is on, hurry hup!!!",
        text:'Visit this http://localhost:8484/user/verifyEmail',
        html: `
        <h3>Dear ${name}</h3>
        ${ecommerceTemp}
        <a href="http://localhost:8484/user/verifyEmail/'+token+'"><H2>Click me to verify mail</H2></a>
        `
};
    transport.sendMail(mailOptions,function(err,email_data){
        if(err){
            console.log(err);
            // res.json(err);
        }else{
            console.log("Email is Sent",email_data);
            res.json({result : 1});
        }
    });
  

} catch (error) {
    return error;
}      
}



module.exports = { 
    // sendEmail,
    sendEmailForGmail
 };