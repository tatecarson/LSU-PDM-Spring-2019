int led = 9; 
int brightness = 200; 
int fadeAmount = 5; 
int fadeRate; 
// step 1. just turn the led on a given brightness
// step 2. dim it over time
// step 3. control it with a pot 

void setup() {
  // because we're using a digital pin we have 
  // to set the mode to input or output
  pinMode(led, OUTPUT); 
  
  Serial.begin(9600);

}

void loop() {
  // set the brightness of pin 9 
  analogWrite(led, brightness);
  fadeRate = analogRead(A0);
  // increase brightness by fadeAmount
  brightness = brightness + fadeAmount;
  
  if(brightness <= 0 || brightness >= 255){
    // toggle increase and decrease
    fadeAmount =- fadeAmount;
  }

  // control the rate of fade with a pot
  int fMap = map(fadeRate, 0, 1023, 10, 100);
  Serial.println(fMap);
  delay(fMap);
}
