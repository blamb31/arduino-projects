int led = 4;
int dip = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(dip, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(dip) == LOW) {
    digitalWrite(led, LOW);
  }else {
    digitalWrite(led, HIGH);
  } 
}
