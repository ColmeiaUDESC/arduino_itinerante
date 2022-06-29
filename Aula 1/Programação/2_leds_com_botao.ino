void setup()
{
  pinMode(7,OUTPUT);//Configura o pino 7 como saida
  pinMode(9,OUTPUT);//Configura o pino 9 como saida
  pinMode(11,INPUT);//Configura o pino 11 como entrada
}
void loop()
{
  if (digitalRead(11) == HIGH)//se existir 5V no pino 11 faça:
  {
    digitalWrite(7,HIGH); //liga o led do pino 7
    digitalWrite(9,LOW); //desliga o led do pino 9   
  }
  else //se não
  {
    digitalWrite(7,LOW); //desliga o led do pino 7
    digitalWrite(9,HIGH); //liga o led do pino 9
  }  
}
