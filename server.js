const express = require("express");
const app = express();
const mongoose = require("mongoose");
const cors = require("cors");
const Donor = require("./model");
const PORT = 8000;

mongoose.connect("mongodb://127.0.0.1:27017/donors")
.then(() => {
    console.log("connected to mongodb");
})
.catch((err) => {
    console.log("error while connecting to mongodb")
})

app.use(cors());
app.use(express.json())

app.get("/", (req, res) => {
    console.log(req.body)
    return res.send("hello")
} )

app.post("/submitForm", (req, res) => {
    console.log(req.body)
    const data = req.body;
    Donor.insertOne(data)
    .then(() => {
        return res.send("data inserted successfully")
    })
    .catch((err) => {
        return res.send("error while inserting data");
    })
} )

app.listen(PORT, ()=> {
    console.log(`server is listening on http://127.0.0.1:${PORT}`)
})