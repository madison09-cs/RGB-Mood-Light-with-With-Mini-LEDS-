// Pin setup
int ldrPin = A0;  // Light sensor

//RGB LED 1
int red1Pin = 11;
int green1Pin = 10;
int blue1Pin = 9;


// Color values
int redVal = 0;
int greenVal = 0;
int blueVal = 255;

int fadeSpeed = 5;      // Adjusts speed of color change
int colorState = 0; // 0: R->G, 1: G->B, 2: B->R

int timer = 100;  

void setup() {
  pinMode(red1Pin, OUTPUT);
  pinMode(green1Pin, OUTPUT);
  pinMode(blue1Pin, OUTPUT);

  
  for (int pin = 7; pin < 5; pin++) {  
    pinMode(pin, OUTPUT); } 
}

void loop() {
  // Read light level and convert to brightness
  int ldrValue = analogRead(ldrPin);
  int brightness = map(ldrValue, 0, 1023, 0, 255);

  // Adjust brightness based on LDR
  int r = map(redVal, 0, 255, 0, brightness);
  int g = map(greenVal, 0, 255, 0, brightness);
  int b = map(blueVal, 0, 255, 0, brightness);

  // Set RGB LED color
  setColor(r, g, b);

  // Transition to next color
  fadeColors();

  delay(20);  // Controls smoothness
  
    for (int pin = 7; pin < 5; pin++) {  
	   pinMode(pin, OUTPUT);
       digitalWrite(pin, HIGH);  
	   delay(1000);  
	   digitalWrite(pin, LOW);
      
}
  for (int pin = 5; pin < 7; pin++) {  
	   digitalWrite(pin, HIGH);  
	   delay(timer);  
	   digitalWrite(pin, LOW);  
	 }  
	 for (int pin = 7; pin >= 5; pin--) {  
	   digitalWrite(pin, HIGH);  
	   delay(timer);  
	   digitalWrite(pin, LOW);  
	 }  
}  

void setColor(int r, int g, int b) {
  analogWrite(red1Pin, r);
  analogWrite(green1Pin, g);
  analogWrite(blue1Pin, b);

}
  
void fadeColors() {
  int step = fadeSpeed;

  if (colorState == 0) { // Red -> Green
    redVal -= step;
    greenVal += step;
    if (redVal <= 0) {
      redVal = 0;
      greenVal = 255;
      colorState = 1;
    }
  }
  else if (colorState == 1) { // Green -> Blue
    greenVal -= step;
    blueVal += step;
    if (greenVal <= 0) {
      greenVal = 0;
      blueVal = 255;
      colorState = 2;
    }
  }
  else if (colorState == 2) { // Blue -> Red
    blueVal -= step;
    redVal += step;
    if (blueVal <= 0) {
      blueVal = 0;
      redVal = 255;
      colorState = 0;
    }
  }

  // Clamp values (just in case)
  if (redVal > 255) redVal = 255;
  if (greenVal > 255) greenVal = 255;
  if (blueVal > 255) blueVal = 255;
  if (redVal < 0) redVal = 0;
  if (greenVal < 0) greenVal = 0;
  if (blueVal < 0) blueVal = 0;
}

