// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>


#define DHTTYPE DHT11	
#define DHTPIN D7   

DHT dht(DHTPIN, DHTTYPE);


void setup() {
    Serial.begin(9600); 
    dht.begin();
}

void loop() {
    delay(2000);
    
    
  float t = dht.getTempCelcius();
    

    
  String temp = String(t);
  
  Particle.publish("temp", temp, PRIVATE);
  
  delay(28000);               // Wait for 30 seconds

}

