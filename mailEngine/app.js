const express = require("express");

const app = express();

//cors
require("./startups/cors")(app);


//start the server
require("./startups/server")(app);

//database connection
require("./startups/db")();

//routing
require("./startups/routes")(app);
