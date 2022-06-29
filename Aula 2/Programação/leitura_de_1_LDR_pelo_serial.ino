int ldr = A5;//Atribui A0 a variável ldr
int valorldr1 = 0;//Declara a variável valorldr como inteiro
void setup() 
{
  pinMode(ldr1, INPUT);
  Serial.begin(9600);
}
void loop() 
{
   valorldr1=analogRead(ldr1);//Lê o valor do sensor ldr e armazena na variável valorldr
   Serial.print("Valor lido pelo LDR = ");//Imprime na serial a mensagem Valor lido pelo LDR
   Serial.println(valorldr1);//Imprime na serial os dados de valorldr
   delay(1000);
}
