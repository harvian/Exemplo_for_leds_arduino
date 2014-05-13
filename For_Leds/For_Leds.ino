

int leds;

void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A4, INPUT);
}

void loop(){
  
  

  for(int led = 2; led < 13; led++){
    int val1 = analogRead(A4);
    int tempo = map(val1, 0, 1023, 10, 300);
    digitalWrite(led, HIGH);
    delay(tempo);
    digitalWrite(led, LOW);      
  }
  
  for(int led = 11; led > 2; led--){
    int val1 = analogRead(A4);
    int tempo = map(val1, 0, 1023, 10, 300);
    digitalWrite(led, HIGH);
    delay(tempo);
    digitalWrite(led, LOW);      
  }
  
  
}
