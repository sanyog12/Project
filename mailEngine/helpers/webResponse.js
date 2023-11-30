
module.exports =(res,data,message,statusCode)=>{
    let response = {};
    response.data = data;
    response.message = message;
    
 return res.status(statusCode).send(response);
}