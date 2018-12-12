//Hides WebGL content
function hideWebGL()
{
	document.getElementsByClassName("webgl-content")[0].style.display = "none";
}

//Show WebGL content
function showWebGL()
{
	hideLogin();
	document.getElementsByClassName("webgl-content")[0].style.display = "block";
}

//Close and hide WebGL content and shows Login page
function Logout()
{//Does not work. Logout is a function of a script attached to Canvas in the Unity Game that will close the application.
	//gameInstance.SendMessage("Canvas","LogOut"); 
	//hideWebGL();
	//showLogin();
	window.location = "index.html";
}

//Login into PlayFab via WebGL
function loginWebGL()
{
	//SendMessage format is (ObjectName, FunctionName, Param). This function will only take one param.
	gameInstance.SendMessage("Canvas","SetEmail", document.getElementById("email").value);
	gameInstance.SendMessage("Canvas","SetPass", document.getElementById("password").value);
	gameInstance.SendMessage("Canvas","Login");	
}

//Hide Login page
function hideLogin()
{
	document.getElementsByClassName("Login-Content")[0].style.display = "none";
}

//Show Login page
function showLogin()
{
	document.getElementsByClassName("Login-Content")[0].style.display = "block";
}

//Begin WebGL content
function startWebGL()
{
	gameInstance = UnityLoader.instantiate("gameContainer", "Build/Game.json", {onProgress: UnityProgress});
}
