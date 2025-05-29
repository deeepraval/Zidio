<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Registration Form</title>

<!-- Bootstrap 5 CSS -->
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">

<!-- Custom CSS -->
<style>
    body {
        background-color: #f2f2f2;
        min-height: 100vh;
        display: flex;
        align-items: center;
        justify-content: center;
    }
    .form-container {
        width: 100%;
        max-width: 600px;
        padding: 30px;
        background: white;
        border-radius: 10px;
        box-shadow: 0 0 10px rgba(0,0,0,0.1);
    }
    .btn-primary {
        background-color: #6c63ff;
        border: none;
    }
    .btn-primary:hover {
        background-color: #5a54d1;
    }
    .login-link {
        display: block;
        text-align: center;
        margin-top: 15px;
    }
    .error {
        color: red;
        font-size: 0.875rem;
    }
</style>
</head>
<body>

<div class="form-container">
    <h2 class="text-center mb-4">Registration Form</h2>
    <form action="result" method="post">
        
        <div class="mb-3">
            <label for="firstname" class="form-label">First Name</label>
            <input type="text" class="form-control" name="firstname" id="firstname" placeholder="Enter the firstname">
            <p class="error">${res.getFieldError("firstname").getDefaultMessage()}</p>
        </div>
        
        <div class="mb-3">
            <label for="lastname" class="form-label">Last Name</label>
            <input type="text" class="form-control" name="lastname" id="lastname" placeholder="Enter the lastname" >
            <p class="error">${res.getFieldError("lastname").getDefaultMessage()}</p>
        </div>
        
        <div class="mb-3">
            <label class="form-label">Gender</label><br>
            <div class="form-check form-check-inline">
                <input class="form-check-input" type="radio" name="gender" id="male" value="Male" >
                <label class="form-check-label" for="male">Male</label>
            </div>
            <div class="form-check form-check-inline">
                <input class="form-check-input" type="radio" name="gender" id="female" value="Female" >
                <label class="form-check-label" for="female">Female</label>
            </div>
            <p class="error">${res.getFieldError("gender").getDefaultMessage()}</p>
        </div>
        
        <div class="mb-3">
            <label for="email" class="form-label">Email</label>
            <input type="email" class="form-control" name="email" id="email"  placeholder="Enter the email">
            <p class="error">${res.getFieldError("email").getDefaultMessage()}</p>
        </div>
        
        <div class="mb-3">
            <label for="password" class="form-label">Password</label>
            <input type="password" class="form-control" name="password" id="password" placeholder="Enter the password">
            <p class="error">${res.getFieldError("password").getDefaultMessage()}</p>
        </div>
        
        <div class="mb-3">
            <label for="category" class="form-label">Category</label>
            <select class="form-select" name="category" id="category" >
                <option value="" selected disabled>Select category</option>
                <option value="Student">Student</option>
                <option value="Graduate">Graduate</option>
                <option value="Fresher">Fresher</option>
            </select>
            <p class="error">${res.getFieldError("category").getDefaultMessage()}</p>
        </div>
        
        <button type="submit" class="btn btn-primary w-100">Sign Up</button>
        <a href="login" class="login-link">Already signed up?</a>
    </form>
</div>

</body>
</html>
