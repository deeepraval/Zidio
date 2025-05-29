package com.controller;

import java.io.IOException;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;

import com.bean.UserBean;




@Controller
public class SessionController {
	
	@GetMapping("login")
	public String login() {
		return "Login";
	}
	
	@GetMapping("signup")
	public String signup() {
		return "Signup";
	}
	
	@PostMapping("result")
	public String result(@Validated UserBean userbean, BindingResult res, Model model) {
	if(res.hasErrors()) {
		model.addAttribute("res",res);
		return "Signup";
	}
	else {
		model.addAttribute("Pls add database");
	}
	return "Login";
		
	}
	@PostMapping("loginres")
	public String loginResult(@Validated UserBean userbean, BindingResult res, Model model) {
        if (res.hasErrors()) {
            model.addAttribute("res", res);
            return "Login";
        } else {
                model.addAttribute("error", "Invalid Credentials!");
                return "Login";
            }
        }
}
