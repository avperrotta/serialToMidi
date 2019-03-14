void setup() {
  Serial.begin(115200);

}

void loop() {
  midiNote(0, 60, 127);
  delay(1000);
  midiNote(0, 60, 0);
  delay(1000);

  controlChange(0, 18, 127);
  delay(500);
  controlChange(0, 18, 0);
  delay(500);

}

//funcao que manda nota midi
void midiNote(int ch, int nn, int vel){
  Serial.write(0x90+ch);
  Serial.write(nn);
  Serial.write(vel);
}

//funcao que manda continuousController
void controlChange(int ch, int cc, int val){
  Serial.write(0xB0 + ch);
  Serial.write(cc);
  Serial.write(val);
}
