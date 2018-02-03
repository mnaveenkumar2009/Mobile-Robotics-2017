//Read some voltage
int led = 13;
void setup() {
  pinMode(led, OUTPUT);  
    pinMode(10, INPUT);
}
void loop() {
  int i=0;
   i=digitalRead(10);
  if(i)
  {
    digitalWrite(13,HIGH);
  }
}
//the connections of 2 and 3 are attached .. connection of 1 is 3 without the battery
