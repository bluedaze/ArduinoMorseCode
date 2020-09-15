void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void wait(){
  int waitTime = 1000;
  digitalWrite(13,LOW);
  delay(waitTime);
}

void dot(){
  int dotTime = 1000;
  digitalWrite(13,HIGH);
  delay(dotTime);
  digitalWrite(13,LOW);
  wait();
  }

void dash(){
  int dashTime = 3000;
  digitalWrite(13,HIGH);
  delay(dashTime);
  digitalWrite(13,LOW);
  wait();
  }

void startMessage(){
    for (int i = 0; i < 4; i++) {
      int startSignal = 50;
      digitalWrite(13,HIGH);
      delay(startSignal);
      digitalWrite(13,LOW);
      delay(startSignal);
    }
   wait();
  }

void characterSpace(){
  digitalWrite(13,LOW);
  delay(3000);
}

void R(){
  dot();
  dash();
  dot();
  delay(3000);
}

void E(){
  dot();
  delay(3000);
}

void B(){
  dash();
  dot();
  dot();
  dot();
  delay(3000);
}

void C(){
  dash();
  dot();
  dash();
  dot();
  delay(3000);
}

void A(){
  dot();
  dash();
  delay(3000);
}

void loop() {
  // Dots last for one second, dashes last for three seconds, 
  // spaces between dots and dashes take one second, spaces 
  // between characters take three seconds, and spaces between 
  // words take seven seconds.

  startMessage();
  R();
  E();
  B();
  E();
  C();
  C();
  A();
}
