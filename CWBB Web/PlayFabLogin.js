//Using PlayFabClientSDK to login with email address
function LoginWithEmailAddress()
{
	//PlayFab requires title ID for login
	PlayFab.settings.titleId = "6F73";
	var loginRequest = {
		Titleid: PlayFab.settings.titleId,
		Email: document.getElementById("email").value,
		Password: document.getElementById("password").value,
	};
	PlayFabClientSDK.LoginWithEmailAddress(loginRequest, LoginCallback);
}

//A placeholder for PlayFabClientSDK.LoginWithEmailAddress' result
var LoginCallback = function (result, error)
{
	if(result != null)
	{
		document.getElementById("Notification").innerHTML = "Login Success";
		setTimeout(function(){
			showWebGL();
			startWebGL();
        }, 1000);
	}
	else if(error != null)
	{
		document.getElementById("Notification").innerHTML = PlayFab.GenerateErrorReport(error);
	}
	
}

//Using PlayFabClientSDK to register an PlayFab account
function RegisterWithEmailAddress()
{
	//PlayFab requires title ID for Register
	PlayFab.settings.titleId = "6F73";
	if (document.getElementById("RegisterPassword").value != document.getElementById("ConfirmPassword").value)
	{
		document.getElementById("Notification").innerHTML = "Password does not match";
		return;
	}	
	
	var RegisterRequest = {
		Titleid: PlayFab.settings.titleId,
		Email: document.getElementById("RegisterEmail").value,
		Password: document.getElementById("RegisterPassword").value,
		RequireBothUsernameAndEmail: false
	};
	PlayFabClientSDK.RegisterPlayFabUser(RegisterRequest, RegisterCallback);
}


//A placeholder for PlayFabClientSDK.RegisterPlayFabUser' result
var RegisterCallback = function (result, error)
{
	if(result != null)
	{
		document.getElementById("Notification").innerHTML = "Register Success";
		Back();
	}
	else if(error != null)
	{
		document.getElementById("Notification").innerHTML = PlayFab.GenerateErrorReport(error);
	}
	
}

//Show only Login form.
function LoginDetails()
{
	HideButtons();
	ShowLoginForm();
}

//Show only Register form.
function RegisterDetails()
{
	HideButtons();
	ShowRegisterForm();
}

//Hide Login and Register selection.
function HideButtons()
{
	var x = document.getElementById("Login button");
	x.style.display = "none";
    var y = document.getElementById("Register button");
	y.style.display = "none";
}

//Show Login and Register selection.
function ShowButtons()
{
	var x = document.getElementById("Login button");
	x.style.display = "block";
    var y = document.getElementById("Register button");
	y.style.display = "block";
}

//Show Login Forms.
function ShowLoginForm()
{
	var x  = document.getElementById("LoginForm");
	x.style.display = "block";
	
}

//Show Register Forms.
function ShowRegisterForm()
{
	var x  = document.getElementById("RegisterForm");
	x.style.display = "block";
}

//Return back to Login and Register selection.
function Back()
{
	var x  = document.getElementById("LoginForm");
	x.style.display = "none";
	var x  = document.getElementById("RegisterForm");
	x.style.display = "none";
	ShowButtons();
}	

//Remove and Notification generated from other functions.
function ClearNotification()
{
	document.getElementById("Notification").innerHTML = "";
}