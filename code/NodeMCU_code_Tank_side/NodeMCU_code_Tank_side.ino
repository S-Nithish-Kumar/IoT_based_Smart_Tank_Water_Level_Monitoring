// include the ultrasonic sensor library
#include <HCSR04.h>
HCSR04 hc(13, 12); // Initialize Pin D7, D6 for the ultrasonic sensor
// include wifi module library and firebase library
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

 
#define FIREBASE_HOST "tank-level-4ee-default-rtdb.firebaseio.com" // Firebase host
#define FIREBASE_AUTH "y7b7ySKtT40V8FFKpUWzX6Lfpp9xDIQllzPs3H" //Firebase Authentication code
#define WIFI_SSID "wifi_name" //Enter your wifi Name
#define WIFI_PASSWORD "wifi_password" // Enter your password

int distance; // distance measured by ultrasonic sensor
int percent; // percentage of water in the tank

void setup()
{
  Serial.begin(9600);
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) 
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop()
{
  distance = hc.dist();
  Serial.println(hc.dist()); // Print in centimeters; the value from the sensor
  percent = 100-(100*(distance/217)); // calculate the percentage of water in the tank based on the tank height. 217 is the tank height here.
  Firebase.setInt("Percent", percent); // upload water level in the firebase database every 50 ms
  delay(50);
}
