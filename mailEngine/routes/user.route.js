const express = require("express");

const router = express.Router();

let userController = require("../controllers/user.controller");

router.post('/register',userController.registerUser);



module.exports = router;