
# Weather Station
Weather station that gives you real-time weather

## Description
A Weather station that get the real-time weather from wherever you live. This project uses a ESP32 & A LCD screen with I2C adapter.
It shows you the temperature, humidty and weather conditions (like cloudy or rainy etc). The model was made in Fusion 360 adn the code was written in the Arduino Ide.
I made this project to build my skills in Hardware, Fusion and Coding on a Lcd screen.

## Picture

![Uploading Screenshot 2026-11-02 at 00.33.26.png…]()



## Getting Started

### Assembly
You will need:
- An ESP32
- An LCD Screen with an I2C Adapter attached
- 5 wires
- The 3D printed models: The clouds, Lightning Bolt and Puddle
- Hot Glue Gun
- Super glue (Optional)
- Electrical tape
- A USB C cable for the ESP32
- Wifi to connect ESP32 

### - Wiring

<img width="1061" height="927" alt="Screenshot 2026-11-01 at 23 55 00" src="https://github.com/user-attachments/assets/4f22c58f-acd8-49ee-91e0-2ea380d221d1" />

1) Connect the wire to: LED pin on the LCD's I2C adapter and to the 3V3 pin on the ESP32
2) Connect the wire to: GND pin on the LCD's I2C adapter and to the GND pin on the ESP32
3) Connect the wire to: VCC pin on the LCD's I2C adapter and to the VIN/5V pin on the ESP32
4) Connect the wire to: SDA pin on the LCD's I2C adapter and to the GPIO 21 pin on the ESP32
5) Connect the wire to: SCL pin on the LCD's I2C adapter and to the GPIO 22 pin on the ESP32
6) If the LCD screen does not turn on, use a screwdriver to twist the screw on the back of the I2C Adapter in the blue block



### - Code

To set the code up on the ESP32:

1) Go to the file list: Open the folder Weather station code, inside the folder download station_code_template.ino
2) Once downloaded open the file in the Arduino IDE
3) Make sure you have these Libraries Downloaded:
   - ArduinoHttpCLient by Arduino
   - WifiNINA by Arduino
   - ArduinoJson by Benoit
   - TinyLiquidCrystal_I2C by Frank de Brabander
   - TinyWireM by Adafruit
4) In the now opened code file, Enter your Wifi Name and Wifi Password here: <img width="581" height="92" alt="image" src="https://github.com/user-attachments/assets/1059fca1-b0b9-43e3-a688-edef99d860ab" />
5) Now open openweathermap.org/ and create a account to get a API key
6) To find you API Key on your newly created openweather account, go to account setting and press API KEY - <img width="1722" height="486" alt="Screenshot 2026-11-01 at 23 35 35" src="https://github.com/user-attachments/assets/016508f7-8bfd-47f5-ba57-76cee362a1d1" />
7) Copy and paste your API key here (before the "): <img width="771" height="24" alt="Screenshot 2026-11-01 at 23 37 42" src="https://github.com/user-attachments/assets/670346d2-6654-4dac-b19f-2eceac57c5b9" />
8) Search up your Longitude and Latitude of where you are right now and insert here: <img width="768" height="50" alt="Screenshot 2026-11-01 at 23 40 33" src="https://github.com/user-attachments/assets/4b49ab33-2fe0-47c6-ad7f-41b35069b602" />
9) if you would like to change the unit of the temp (originally put in metric system), write imperial where metric is. <img width="98" height="22" alt="Screenshot 2026-11-01 at 23 42 05" src="https://github.com/user-attachments/assets/e42ec643-36e0-45a2-8c22-2555180c22d9" />
10) Now upload the code 

### - Putting it together

To Assemble the 3D parts and the electronics together:


1) Grab the Lightning bolt Part and The puddle part and attach it together with either Super Glue or Hot Glue. <img width="667" height="404" alt="Screenshot 2026-11-01 at 23 56 23" src="https://github.com/user-attachments/assets/ae60d301-64e7-420c-a711-8b1db8fa72b4" /> <img width="501" height="772" alt="Screenshot 2026-11-01 at 23 56 47" src="https://github.com/user-attachments/assets/39f7ae82-2282-43e5-8df0-c481dc5d726f" />


2) There are 2 clouds one with a small rectangle and one with a big rectangle: Place the LCD Screen in the Big rectangle and the ESP32 in the Small rectangle <img width="831" height="1002" alt="image" src="https://github.com/user-attachments/assets/87c484df-f919-43b2-b40e-2530023b7f97" /> <img width="608" height="926" alt="Screenshot 2026-11-02 at 00 01 31" src="https://github.com/user-attachments/assets/b0854751-e702-484f-8771-0fb7d8961afb" />



3) Using the Electrical tape, tape the wire together in a bunch <img width="777" height="963" alt="Screenshot 2026-11-02 at 00 02 12" src="https://github.com/user-attachments/assets/80e8e136-2226-46f6-ab38-6b7ab8c84129" />


4) Now Hot glue the ESP32 in the cloud with the small rectangle, making sure the ESP32's charger port is aligned with the charger port opening of the cloud (dont do as messy as i did) <img width="931" height="481" alt="Screenshot 2026-11-02 at 00 08 12" src="https://github.com/user-attachments/assets/3be34980-6813-4dfa-9e84-2942dea0e201" /> <img width="280" height="578" alt="Screenshot 2026-11-02 at 00 07 36" src="https://github.com/user-attachments/assets/71982d7c-a2e5-4f4d-befd-8e8f33d09f8e" />


5) Do the same for the LCD, Hot glue the corners to the cloud with the big rectangle making sure the screen is aligned right.<img width="1237" height="891" alt="Screenshot 2026-11-02 at 00 16 10" src="https://github.com/user-attachments/assets/3cfe8a17-8256-40a5-93f7-8685da21eb12" /> <img width="560" height="1131" alt="Screenshot 2026-11-02 at 00 15 55" src="https://github.com/user-attachments/assets/0f3b664a-f8ee-4e22-a659-dd61e3a98508" /> <img width="1407" height="823" alt="Screenshot 2026-11-02 at 00 15 35" src="https://github.com/user-attachments/assets/8ade413e-bbb7-480f-9a63-7c6284d7cbb5" />


6) Stuff the wire in the remaining space, you could use electrical tape (recommended)

   
7) Hot glue the cloud pieces together <img width="754" height="1000" alt="Screenshot 2026-11-02 at 00 19 00" src="https://github.com/user-attachments/assets/79a8af84-d814-4beb-a742-09d302a9bbcd" />


8) Finally Hot glue the Lightning Bolt and Cloud together aswell <img width="1542" height="2056" alt="IMG_6421 (1)" src="https://github.com/user-attachments/assets/68ed9fd2-7235-40cd-be64-3cfac0fbe296" />

  All Done!



