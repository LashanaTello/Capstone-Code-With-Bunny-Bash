# Capstone Project: Code With Bunny Bash
A group project for our capstone class. The project is a game that introduces kids to programming and teaches kids basic programming concepts. The game will be available on the web and mobile. We will use the Unity game engine to make the game.


Instructions on how to build the game in iOS on the bottom.
NOTE: .Meta files are not shown in this but there are in Asset folder. .Meta files are generated by Unity.
.
├── Asset
│	├──Animation			#Contains animations made by Xiaoning
│	├──Audio				#Contains songs
│	├──Background			#Contains background images
│	├──Controller			#Contains animations used in Title Screen Scene
│	├──LashanaAssets			#Contains Assets used by Lashana. No Scripts
│	├──PlayFabEditorExtensions		#PlayFab EditorExtension for Unity Editor
│	├──PlayFabSDK			#PlayFab SDK for Unity
│	├──Plugin				#Contains .dll files used for SQLite3
│	├──Scenes				#Contains Unity Scenes
│	├──Scripts				#Contains written C sharp files
│	│	├──Andy’s Script		#Contains C sharp files written by Andy
│	│	├──Lashana’s Scripts		#Contains C sharp files written by Lashana
│	│	└──Xiaoning’s Script		#Contains C sharp files written by Xiaoning
│	├──Sprites				#Contains sprites used in Title Screen Scene
│	├──StreamingAssets			#Contain SQLite3 database
│	├──Grass platform platette.prefab 	#a created Prefab
│	├──idle.anim			#idle animation
│	└── NewAudioMixer			#Used for music
├──CWBB Web
│	├──Build				#Generated by Unity
│	├──Images				#Contain Images used in web page
│	├──InstructionVideo
│	│	├──Basic Instructions.mp4	
│	│	├──Conditional Instructions.mp4
│	│	├──Function Instructions.mp4
│	│	├──InstructionVideo.css		#CSS for displaying Instruction video
│	│	├──InstructionVideo.js		#Javascript for displaying Instruction video
│	│	└──Loop Instructions.mp4
│	├──TemplateData			            #Generated by Unity
│	│	├──UnityProgress.js		            #Modified by Andy
│	│	└── . . .				#Generated files by Unity
│	├──IndexStyleSheet.css			#CSS for displaying WebGL
│	├──PlayFabLogin.js			            #Javascript using PlayFab API and displaying functions
│	├──README.md				#Readme file on how to update WebGL using Unity
│	├──WebGL.js				#Javascript on displaying WebGL and other functions
│	└──index.html				#Basis of web page
├──CWBB iOS					#Generated by Unity
├──UML					            #UML for Web page and Unity
├──CodeWithBashBunny Report.pdf		            #Capstone report
└──README					            #This file

## Instructions for Building Code With Bunny Bash game for iOS

1)Create a new Unity Project.
2)Open file explorer to the Unity Project
3)Copy and Paste Asset folder to the file explorer
4)Under File, Go to Build Setting (Default Shortcut: Ctrl + Shift + B)
5)Add Scenes and make sure Title Screen is the first one.
6)Select iOS in Platform
7)Open another Scene and click on ‘Add Open Scenes’
8)Repeat step 7 until all scenes are added
9)Open the Player Settings in the Inspector panel (Edit > Project Settings > Player) and expand the section at the bottom called Other Settings, and enter your chosen bundle identifier (change identifier because the default identifier does not work) where it says Bundle identifier.
10)Click on Build 
11)After Unity finish building iOS platform, go to this website for how to download the game to your iOS device.
https://unity3d.com/learn/tutorials/topics/mobile-touch/building-your-unity-game-ios-device-testing
12)On the website, Find (Default shortcut: ctrl + f) “Building the sample project to your device using Xcode” 
13)Follow the instruction after it. Everything below is copied from 
https://unity3d.com/learn/tutorials/topics/mobile-touch/building-your-unity-game-ios-device-testing

Building the sample project to your device using Xcode
Once Unity has built the Xcode project, a Finder window will open at the project’s location.
Double click the .xcodeproj file to open the project with Xcode.
In the top left, select Unity-iPhone to view the project settings. It will open with the General tab selected.
Under the topmost section called Identity, you may see a warning and a button that says Fix Issue. This warning doesn’t mean we’ve done anything wrong - it just means that Xcode needs to download or create some files for code signing.
Click the Fix Issue button.

A popup will appear, showing details of any teams that have been added to Xcode.
Make sure that the correct team is shown in the dropdown - if you’re using a free Apple ID, it should be your name followed by "(Personal Team)".
Click Choose to instruct Xcode to download any required certificates and generate a provisioning profile. The warning will then disappear.

Certificates and provisioning profiles the files required for code signing. You don’t need to worry about what they do at the moment - but if you’d like to know more about them, see this Apple documentation.
Now connect your device to your computer using a USB cable. If it’s the first time you’ve connected this device, you may see a message that says that Xcode is "processing symbol files" - this means that Xcode is getting information from the device that will allow you debug apps on this device. Wait for this to complete. Once it has finished processing the symbol files, the message will disappear and your device will be ready to use.
The final step before we build to the device is to make sure that the device is unlocked, because Xcode can’t launch apps on a device that is locked with a passcode. If your device is set to lock with a passcode, it’s best to change this setting before you build to your device and then change it back after you have finished testing.
On your device, go to Settings > Display & Brightness > Auto-Lock.
To disable locking, select Never.
It is worth noting that when in Low Power Mode, the Auto-Lock settings cannot be changed until Low Power Mode is turned off.
To turn off Low Power Mode, go to Settings > Battery > Low Power Mode and set this to "Off".
Now it’s time to build to your device.
In the top left of the Xcode interface, click Run (the "play" button).

If you haven’t used your Mac to develop for iOS or OSX before, you may see a popup at this point asking if you would like to enable Developer Mode. Enabling Developer Mode will mean that you won’t be prompted for your password when carrying out common development tasks.
Enable Developer Mode by choosing Enable, and enter your password when prompted.

After a moment, you’ll see a message in the bar at the top centre of Xcode that says "Build succeeded", and the app will load on your device. We’re almost done!
You may receive a warning prompt on the device with the title "Untrusted Developer", or a popup in Xcode that says “Could not launch [your app name]”. If you see either of these, it means the that there’s one last step left: you need to set your device to trust your Apple ID.
On your device, go to Settings > General > Device Management > Developer App > [your app name].
Choose your Apple ID, and then choose Trust.
As long as you have at least one app built using that Apple ID on your device, your device will allow content built with that Apple ID to run. If you ever remove all of the apps built with that Apple ID from your device, you’ll need to go back to this setting and choose to trust it again.
Testing the game on your iOS device
The game has now been built to your device. If you disconnect your phone from your computer, the game will still be there. To play the game on your device, tap its icon on the home screen - the same way you would launch any app on the device.
Our game works! The cube spins, and tapping it causes it to change direction.
Simply playing your game on a device is one way of testing it. It’s a good way of checking things like whether the controls work. However, if you want more information - if you’d like to see Unity’s logs while you play, for example - you’ll need to build and run the app while the device is still connected to Xcode.
Let’s do this now.
Connect your device to your computer.
Open the Xcode project by double clicking the .xcodeproj icon, as before.
In Xcode, choose Run (the "play" button).
Xcode will now build the game to your device and begin a debugging session.

If you look to the bottom right of Xcode while your game is running, you’ll see the Xcode debug console. This contains all of the information that you’d see in the Unity console, along with debug information about other things that are happening in the OS. You can use this in the same way that you use the console within Unity, to help you debug your game.


