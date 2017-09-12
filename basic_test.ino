/* Micro 130 DC Motor [D071] :  http://rdiot.tistory.com/276 [RDIoT Demo] */

int motorPin = 9; //D9

void setup() {  
  pinMode(motorPin, OUTPUT);  //PWM
  Serial.begin(9600);
  Serial.println("DC Motor Input Speed 0~255");
}

void loop() {
  if(Serial.available())
  {
    int speed = Serial.parseInt();
    Serial.println(speed);
    analogWrite(motorPin,speed);  
  }
}
