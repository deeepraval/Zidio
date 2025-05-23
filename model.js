const mongoose = require('mongoose');

const donorSchema = new mongoose.Schema({
  firstName: {
    type: String,
    required: [true, 'First name is required']
  },
  lastName: {
    type: String,
    required: [true, 'Last name is required']
  },
  email: {
    type: String,
    required: [true, 'Email is required'],
    unique: true,
    match: [/.+\@.+\..+/, 'Please enter a valid email']
  },
  phone: {
    type: String,
    required: [true, 'Phone number is required']
  },
  dob: {
    type: String,
    required: [true, 'Date of birth is required']
  },
  bloodType: {
    type: String,
    required: [true, 'Blood type is required']
  },
  address: {
    type: String,
    required: [true, 'Address is required']
  },
  city: {
    type: String,
    required: [true, 'City is required']
  },
  zip: {
    type: String,
    required: [true, 'ZIP code is required']
  },
  availability: {
    type: String,
    required: [true, 'Availability is required']
  },
  message: {
    type: String,
    required: [true, 'Message is required']
  }
}, {
  timestamps: true 
});

const Donor = mongoose.model('Donor', donorSchema);
module.exports = Donor;