// include wifi module library and firebase library
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
// include the SoftwareSerial library and initialize the pins. The are connections are shown in circuit diagram.
#include<SoftwareSerial.h>
SoftwareSerial s(3,1);

#define FIREBASE_HOST "tank-level-4ee-default-rtdb.firebaseio.com" // Firebase host
#define FIREBASE_AUTH "y7b7ySKtT40V8FFKpUWzX6Lfpp9xDIQllzPs3H" //Firebase Authentication code
#define WIFI_SSID "wifi_name" //Enter your wifi Name
#define WIFI_PASSWORD "wifi_password" // Enter your password

int current_percentage=0; // current water level in the tank
int previous_percentage=0; // previous water level before the current level

void setup()
{
  Serial.begin(9600);
  s.begin(9600); // begin the serial communication between NodeMCU and Arduino

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
  current_percentage = Firebase.getInt("Percent"); // receives water level from firebase
  // only if the water level varies, send the water level to arduino
  // checks for the water level every two second
  if(previous_percentage != current_percentage)
  {
  s.write(int(current_percentage));
  previous_percentage = current_percentage;
  }
  delay(2000);
}
