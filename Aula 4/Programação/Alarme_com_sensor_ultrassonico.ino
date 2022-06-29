#include <Ultrasonic.h>
#define pino_trigger 3 //define o pino trigger escrito no utrassonico como sendo 3
#define pino_echo 4 //define o pino echo escrito no utrassonico como sendo 4
#define alarme 5
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo); //comando especifico da biblioteca Ultrassonic.h
long microsec = 0; // variavel de controle
float distanciaCM = 0; // variavel de controle
void setup()
{
//  pinMode(pino_trigger, INPUT);
//  pinMode(pino_echo, OUTPUT);
  pinMode(alarme, OUTPUT);
}
 
void loop()
{
  //Lendo o valor do sensor
  microsec = ultrasonic.timing();

  //Convertendo a distância em CM
  distanciaCM = ultrasonic.convert(microsec, Ultrasonic::CM);

   if (distanciaCM <20)  
  {  
    digitalWrite(alarme, HIGH);
  }
}
