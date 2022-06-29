#include <Ultrasonic.h>
#define pino_trigger 3 //define o pino trigger escrito no utrassonico como sendo 3
#define pino_echo 4 //define o pino echo escrito no utrassonico como sendo 4
#define led1 6
#define led2 7
#define led3 8
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo); //comando especifico da biblioteca Ultrassonic.h
long microsec = 0; // variavel de controle
float distanciaCM = 0; // variavel de controle
void setup()
{
//  pinMode(pino_trigger, INPUT);
//  pinMode(pino_echo, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
 
void loop()
{
  //Lendo o valor do sensor
  microsec = ultrasonic.timing();

  //Convertendo a distância em CM
  distanciaCM = ultrasonic.convert(microsec, Ultrasonic::CM);

   if (distanciaCM <10)  
  {  
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH);  
  }  
  else if (distanciaCM <15)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if (distanciaCM <20)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }    
  else 
  {   
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }  

}
