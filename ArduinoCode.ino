#define trigPin D1
#define echoPin D2

#include "Adafruit_NeoPixel.h"

#define PIXEL_PIN     D5
#define PIXEL_COUNT   10
#define PIXEL_TYPE    NEO_GRB + NEO_KHZ800

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pixels.begin();
  pixels.show();
}

void loop() {
  
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

    Serial.print(distance);
    Serial.println(" cm");
    delay(500);

if (distance <= 10){
   for(byte x=0;x<10;x++){
          pixels.setPixelColor(x,255, 0, 0);    
          }
          pixels.show();  
  }

else if (distance >= 10 && distance <= 25){
   for(byte x=0;x<10;x++){
          pixels.setPixelColor(x,253, 106, 2);    
          }
          pixels.show();  
  }

else if (distance >= 25){
   for(byte x=0;x<10;x++){
          pixels.setPixelColor(x,0, 255, 0);    
          }
          pixels.show();  
  }
  

}
