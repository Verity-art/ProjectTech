int Sensor = 5;
int BUTTON = 3; 
int LED = 2;
int BUTTONstate = 0;

void setup()  
{ 
  pinMode (BUTTON, INPUT_PULLUP); // Button uses Arduino's internal resistor
 pinMode(LED, OUTPUT);
}

void loop() {

delay (10);

delay(100);
BUTTONstate = digitalRead(BUTTON);
if (BUTTONstate == LOW)
{
  digitalWrite(LED, HIGH);
}
else {
  digitalWrite(LED, LOW);
} int state = digitalRead(BUTTON);
Serial.println(state); 
digitalWrite(LED, !state);
delay(100);
}
