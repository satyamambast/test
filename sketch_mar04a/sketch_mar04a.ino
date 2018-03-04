long duration,distance;
void setup() {
  pinMode(4, OUTPUT);
pinMode(12, INPUT);
Serial.begin(9600); 

}

void loop() {
  digitalWrite(4, LOW);
delayMicroseconds(2);
digitalWrite(4, HIGH);
delayMicroseconds(10);
digitalWrite(4, LOW);
duration = pulseIn(12, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
}
