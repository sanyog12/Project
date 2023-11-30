let config = require("config");

module.exports = (app)=>{
   
    let port = config.get("port");
    app.listen(port,()=>{
        console.log(`Live running on port ${port}`);
    })
}