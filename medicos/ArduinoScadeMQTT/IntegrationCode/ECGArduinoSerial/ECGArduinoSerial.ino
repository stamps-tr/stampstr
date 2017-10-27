void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if((digitalRead(11) == 1)){
    Serial.println("LO- detected!");
  }
  else if ((digitalRead(10) == 1)){
    Serial.println("LO+ detected!");
  }
  else {
      Serial.println(analogRead(A1));
  }
  delay(100);
}
