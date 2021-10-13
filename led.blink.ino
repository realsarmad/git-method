#include <DHT.h>
DHT dht(2,DHT11);

void setup(){
  Serial.begin(9600);
  dht.begin();
}
void loop(){
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();
  float temp2=dht.readTemperature(true);  //for farenheite
//  float kelvin=temp+273;
  Serial.print("temp:");

  Serial.print(temp);
  Serial.print("C");
  Serial.print("  ");
  Serial.print(temp2);
  Serial.print("F");
  Serial.print("  ");
//  Serial.print(kelvin);
//  Serial.print("K");
//  Serial.print("  ");
  Serial.print("humidity:");

  Serial.print(hum);
  Serial.println("%");
  delay(500);
  
}
