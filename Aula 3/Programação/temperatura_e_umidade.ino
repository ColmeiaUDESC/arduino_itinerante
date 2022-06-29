#include <dht.h>


#define pino_sensor A0 // pino anologico
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay do reboot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//espera para ver o sensor
 
}//end "setup()"
 
void loop(){
 
 
    DHT.read11(pino_sensor);
    
    Serial.print("Umidade = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperatura = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(2000);//Espera por 2 seguntos até medir novamente, é recomendado a ser no minimo 2seg
 
}// end loop(
