# UE4_AR_IoT_Demo

A simple demo application using Google ARCore to implement an AR 'switch' to control a Philips Hue lightbulb. The switch is triggered by spawning 
two spheres (the activator and target) and making the two collide by moving the activator to the proximity of the target. 

# Prerequsites
1. An Android smartphone that is ARCore compatible 
2. Va Rest Plugin for Unreal Engine
3. OpenWeatherAPI Application ID
4. REST endpoint of the Philips Hue lightbulb (IP address) 
5. Home Assistant Authorization token

# Setup Instructions 
1. Clone this repository. 
2. Install the Va Rest Plugin for Unreal Engine at https://github.com/ufna/VaRest   
   a. Clone the Va Rest repository  
   b. Create a Plugins directory and put the Va Rest directory inside:  
      UE_AR_IoT_Demo  
         Plugins  
            VaRest-1.1-r26  
              Resources, Source, ...  
   c. In the DefaultEngine.ini configuration file, enable the Va Rest Plugin by adding:  
       [Plugins]  
       +EnabledPlugins=VaRestPlugin  
3. Open the project in Unreal Engine and navigate to the BP_ARPawn blueprint. 
4. Find the 'App ID' local variable and replace {YOUR OPENWEATHERAPI APP ID} with your OpenWeatherAPI App ID in its default value. 
5. Find the 'Auth Token' local variable and {YOUR HASSIO AUTHORIZATION TOKEN} with your Home Assitant Authorization token in its default value. 
6. Find the 'Base Lamp Request URL' local variable and replace {YOUR IP ADDRESS} with the IP address of your Philips lighbulb's REST API
7. Compile, Save, and launch the application on your ARCore-compatible Android device.
