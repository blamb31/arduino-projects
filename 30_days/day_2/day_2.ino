int light = 4; 

void setup() {
  // put your setup code here, to run once:
  pinMode(light, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(light, HIGH);
  delay(5000);
  digitalWrite(light, LOW);
  delay(5000);
}
