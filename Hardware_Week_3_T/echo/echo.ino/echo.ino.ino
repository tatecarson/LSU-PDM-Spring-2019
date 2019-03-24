int incomingByte = 0;
boolean readDataFromp5 = true;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // send data to p5
  if (readDataFromp5) {
    // Read data being sent from p5
    if (Serial.available() > 0) {
      incomingByte = Serial.read();
      Serial.write(incomingByte); // convert back to readable text
      Serial.println(incomingByte);       // print as an ASCII-encoded decimal
      Serial.println(incomingByte, DEC);  // print as an ASCII-encoded decimal
      Serial.println(incomingByte, HEX);  // print as an ASCII-encoded hexadecimal
      Serial.println(incomingByte, OCT);  // print as an ASCII-encoded octal
      Serial.println(incomingByte, BIN);  // print as an ASCII-encoded binary
    }
  } else {
    for (int inByte = 0; inByte < 256; inByte++) {
      // print in console AND send to p5
      Serial.println(inByte);
    }
  }
  delay(1);
}
