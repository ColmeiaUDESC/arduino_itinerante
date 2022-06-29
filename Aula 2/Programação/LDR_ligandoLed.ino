const int pinoLed = 3; //const é tipo um #define com algumas diferenças
const int pinoLDR = A5; //PINO ANALÓGICO UTILIZADO PELO LDR
  
void setup(){  
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLDR, INPUT); //DEFINE O PINO COMO ENTRADA
}    
void loop(){
  //O VALOR 10 PODE SER AJUSTADO
  if(analogRead(pinoLDR) > 10){ //SE O VALOR LIDO FOR MAIOR QUE 10, FAZ
    digitalWrite(pinoLed, HIGH); //ACENDE O LED
    delay(1000); // DEIXA O LED LIGADO DURANTE UM TEMPO PARA NÃO ACONTECER ERRO DE LEITURA
  }  
  else{ 
    digitalWrite(pinoLed, LOW); //APAGA O LED
  }  
}
