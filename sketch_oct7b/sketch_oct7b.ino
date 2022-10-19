const int button = 4;
int buttonValue = 0;
int lightLevel = 1000;

void setup() {
  // put your setup code here, to run once:
  for(int pin = 8; pin <=11; pin++ ) {
    pinMode(pin, OUTPUT);
  }
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonValue = digitalRead(button);
  Serial.println(buttonValue);
  if(buttonValue == HIGH) {
      
      for(int pin = 8; pin <=10; pin++ ) {
        digitalWrite(pin, HIGH);

        delay(150);

        digitalWrite(pin, LOW);
        
      }
      
      for(int pin = 11; pin >=8; pin-- ) {
        digitalWrite(pin, HIGH);

        delay(150);

        digitalWrite(pin, LOW);
        
      }

      int diceValue = random(1,7);

      for(int pin = 8; pin <8 + diceValue; pin++ ) {
        digitalWrite(pin, HIGH);        
      }      

  }


}
