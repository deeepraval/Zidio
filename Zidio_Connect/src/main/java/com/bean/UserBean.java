package com.bean;

import jakarta.validation.constraints.NotBlank;

public class UserBean {
	
	@NotBlank(message="Please enter the First name")
	private String firstname;
	@NotBlank(message="Please enter the Last name")
	private String lastname;
	@NotBlank(message="Please enter the Gender")
	private String gender;
	@NotBlank(message="Please enter the Email")
	private String email;
	@NotBlank(message="Please enter the Password")
	private String password;
	@NotBlank(message="Please enter the Category")
	private String category;
	
	public String getFirstname() {
		return firstname;
	}
	public void setFirstname(String firstname) {
		this.firstname = firstname;
	}
	public String getLastname() {
		return lastname;
	}
	public void setLastname(String lastname) {
		this.lastname = lastname;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	public String getCategory() {
		return category;
	}
	public void setCategory(String category) {
		this.category = category;
	}
	
	
	

}
