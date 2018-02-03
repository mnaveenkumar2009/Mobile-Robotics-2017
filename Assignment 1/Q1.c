//continuously increase brightness on o/p
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int i=255;
  while(i!=0)
  { analogWrite(led,255-i);
   i-=1;
   delay(100);        
   }
}
