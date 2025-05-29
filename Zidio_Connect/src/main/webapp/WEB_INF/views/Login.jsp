<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Login Page</title>

<!-- Bootstrap 5 CSS -->
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">

<!-- Custom CSS -->
<style>
    body {
        background-color: #f8f9fa;
        min-height: 100vh;
        display: flex;
        align-items: center;
        justify-content: center;
    }
    .login-container {
        width: 100%;
        max-width: 400px;
        padding: 30px;
        background-color: #ffffff;
        box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
        border-radius: 10px;
    }
    .form-control:focus {
        box-shadow: none;
        border-color: #6c63ff;
    }
    .btn-primary {
        background-color: #6c63ff;
        border: none;
    }
    .btn-primary:hover {
        background-color: #5a54d1;
    }
    .signup-link {
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

<div class="login-container">
    <h2 class="text-center mb-4">Login</h2>
    <form method="post" action=loginres>
        <div class="mb-3">
            <label for="username" class="form-label">Username</label>
            <input type="text" name="email" id="username" class="form-control" placeholder="Enter the username or email">
            <p class="error">${res.getFieldError("email").getDefaultMessage()}</p>
        </div>
        
        <div class="mb-3">
            <label for="password" class="form-label">Password</label>
            <input type="password" name="password" id="password" class="form-control" placeholder="Enter the Password">
            <p class="error">${res.getFieldError("password").getDefaultMessage()}</p>
        </div>
        
        <button type="submit" class="btn btn-primary w-100">Login</button>
        <a href="signup" class="signup-link">Don't have an account?</a>
    </form>
</div>

</body>
</html>
