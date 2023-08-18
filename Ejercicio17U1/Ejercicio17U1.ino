void setup() {
  // put your setup code here, to run once:
test();

}

void loop() {
  // put your main code here, to run repeatedly:
test();
}
void test(){
  if(Serial.available() >= 3){
    int dataRx1 = Serial.read();
    int dataRx2 = Serial.read();
    int dataRx3 = Serial.read();
    if (dataRx3 != 0){

    Serial.print("V1: ");
    Serial.print(dataRx1);
    Serial.print('\n');
    Serial.print("V2: ");
    Serial.print(dataRx2);
    Serial.print('\n');
    Serial.print("V3: ");
    Serial.print(dataRx3);
    Serial.print('\n');
}
}

}
