//Hides Instruction Video
function hideInstruction()
{
	document.getElementsByClassName("Instruction-Video")[0].style.display = "none";
	showWebGL();
}

//Show Instruction Video
function showInstruction()
{
	hideWebGL();
	document.getElementsByClassName("Instruction-Video")[0].style.display = "block";
}

//Used there is multiple video and need a return to top button
window.onscroll = function() {scrollFunction()};

//Hide and show ReturnToTop button
function scrollFunction() {
    if (document.body.scrollTop > 20 || document.documentElement.scrollTop > 20) 
	{
        document.getElementById("ReturnToTop").style.display = "block";
    } 
	else 
	{
        document.getElementById("ReturnToTop").style.display = "none";
    }
}

function ReturnToTop() {
    document.body.scrollTop = 0;
    document.documentElement.scrollTop = 0;
}