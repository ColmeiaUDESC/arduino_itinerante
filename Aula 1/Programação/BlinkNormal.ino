void setup()
{
  pinMode(2, OUTPUT); //Configura o pino 2 como saida)
}

void loop()
{
  digitalWrite(2, HIGH); //Envia 5V no pino 2
  delay(1000); // Espera por 1000 millisegundos
  digitalWrite(2, LOW); //Envia 0V no pino 2
  delay(1000); // Espera por 1000 millisegundos
}
