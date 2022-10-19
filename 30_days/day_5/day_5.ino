const int led1 = 6;
const int led2 = 5;
const int led3 = 3;

const int switch1 = 13;
const int switch2 = 12;
const int switch3 = 11;

byte brightness = 0;
int switchCount = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  const int s1 = digitalRead(switch1);
  const int s2 = digitalRead(switch2);
  const int s3 = digitalRead(switch3);

  switchCount = 0;
  if(s1 == HIGH) {
    switchCount++;
  }
  if(s2 == HIGH) {
    switchCount++;
  }
  if(s3 == HIGH) {
    switchCount++;
  }

  //All lights on, dimmed depending on how many switches are on
  if(switchCount == 0) {
    brightness = 0;
    analogWrite(led1, brightness);
    analogWrite(led2, brightness);
    analogWrite(led3, brightness);
  }
  if(switchCount == 1) {
    brightness = 25;
    analogWrite(led1, brightness );
    analogWrite(led2, brightness);
    analogWrite(led3, brightness);
  }
  if(switchCount == 2) {
    brightness = 100;
    analogWrite(led1, brightness);
    analogWrite(led2, brightness);
    analogWrite(led3, brightness);
  }
  if(switchCount == 3) {
    brightness = 255;
    analogWrite(led1, brightness);
    analogWrite(led2, brightness);
    analogWrite(led3, brightness);
  }

  //One light on per switch, brightness increased with more switches on
  
  // if(switchCount == 0) {
  //   brightness = 0;
  //   analogWrite(led1, brightness);
  //   analogWrite(led2, brightness);
  //   analogWrite(led3, brightness);
  // }
  // if(switchCount == 1) {
  //   brightness = 25;
  //   analogWrite(led1, brightness );
  //   analogWrite(led2, LOW);
  //   analogWrite(led3, LOW);
  // }
  // if(switchCount == 2) {
  //   brightness = 100;
  //   analogWrite(led1, brightness);
  //   analogWrite(led2, brightness);
  //   analogWrite(led3, LOW);
  // }
  // if(switchCount == 3) {
  //   brightness = 255;
  //   analogWrite(led1, brightness);
  //   analogWrite(led2, brightness);
  //   analogWrite(led3, brightness);
  // }
}
