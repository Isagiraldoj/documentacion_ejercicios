void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println("primer mensaje");
  delay(2000);
  Serial.println("segundo mensaje");
  delay(3000);
  Serial.println("tercer mensaje");
  }
