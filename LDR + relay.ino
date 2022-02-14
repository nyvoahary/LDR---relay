#define LDR A0
#define LAMP1 2
#define LAMP2 3

/*
  Behavior,
  If the value is HIGH, the light in the room should be darker.
  Otherwise, the light in the room should be lighter.
*/


void setup(){
  pinMode(LAMP1,OUTPUT);
  pinMode(LAMP2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned int AnalogValue;
  AnalogValue = analogRead(LDR);

  if (AnalogValue >= 650) {
    // Serial.println("Tokony mirehitra ilay jiro");
    digitalWrite(LAMP1,HIGH);
    digitalWrite(LAMP2,LOW);
    // delay(1000);
  } else {
    // Serial.println("Tokony ho faty ilay jiro");
    digitalWrite(LAMP1,LOW);
    digitalWrite(LAMP2,HIGH);
    // delay(1000);
  }
}