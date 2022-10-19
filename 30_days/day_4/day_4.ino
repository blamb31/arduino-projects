const int led1 = 12;
const int led2 = 11;
const int led3 = 10;

const int switch1 = 4;
const int switch2 = 3;
const int switch3 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);  
  pinMode(switch1, INPUT);  
  pinMode(switch2, INPUT);  
  pinMode(switch3, INPUT);  
}

void loop() {
  // put your main code here, to ru n repeatedly:
  if(digitalRead(switch1) == HIGH) {
    digitalWrite(led1, HIGH);
  }else {
    digitalWrite(led1, LOW);
  }
  if(digitalRead(switch2) == HIGH) {
    digitalWrite(led2, HIGH);

  }else {
    digitalWrite(led2, LOW);

  }
  if(digitalRead(switch3) == HIGH) {
    digitalWrite(led3, HIGH);

  }else {
    digitalWrite(led3, LOW);

  }
}
