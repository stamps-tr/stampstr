int analogPin = 0;
int temp = 0;
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  temp = analogRead(analogPin);
  Serial.println(temp);
  delay(200);
}
