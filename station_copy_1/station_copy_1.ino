#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <Wire.h>
#include <WiFiClientSecure.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0X27 , 16, 2);

const char* ssid = "MyWifi"; 
const char* password = "12345678";



void setup() {
  
Serial.begin(9600);

lcd.init();
lcd.backlight();
lcd.clear();

WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
}

Serial.println("Wifi Connected");

}

void loop() {

  if (WiFi.status() == WL_CONNECTED) {


   HTTPClient http;  
   http.begin("https://api.openweathermap.org/data/2.5/weather?lat=51.50&lon=0.12&appid=MyWeatherAPIid"); // took out my api id and put default lat and lon
   int httpCode = http.GET();
   
    if (httpCode > 0) {
      String JSON_Data = http.getString();
      Serial.println(JSON_Data);

      DynamicJsonDocument doc(2048);
      deserializeJson(doc, JSON_Data);
      JsonObject obj = doc.as<JsonObject>();
      
      const char* description = obj["weather"][0]["description"].as<const char*>();
      const float temp = obj["main"]["temp"].as<float>();
      const float humidity = obj["main"]["humidity"].as<float>();

      lcd.clear();
      lcd.print(description);
      lcd.setCursor(0, 1);
      lcd.print(temp);
      lcd.print("C, ");
      lcd.print(humidity);
      lcd.print("%");
      

    } else {
      Serial.println("Error");
      lcd.clear();
      lcd.print("Can't Get Data");
    }
    http.end ();
  }
  delay(30000);
}
