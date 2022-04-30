int botao1= T5;
int botao2= T5;
int led = T5;
int estado_botao1;
int estado_botao2;





void setup() {
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(led, OUTPUT);
  
}

void loop() {
  digitalRead (estado_botao1);
  digitalRead (estado_botao2);
  if(estado_botao1 == LOW){
    digitalWrite(led, HIGH);

  }
  else{
    digitalWrite(led, LOW);
  }
  if(estado_botao2 == LOW){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  
}
