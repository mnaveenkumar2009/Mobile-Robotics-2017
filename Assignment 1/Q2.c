//make cool blinking patterns on led's

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led-1, OUTPUT);
    pinMode(led-2, OUTPUT);
}

void loop() {
  static int i=0;
  if(i%2){
  digitalWrite(led,HIGH);
  delay(1000);
    
  digitalWrite(led,LOW);
  digitalWrite(led-1,HIGH);
  delay(1000);
    
  digitalWrite(led-1,LOW);
  digitalWrite(led-2,HIGH);
  
    delay(1000);
  digitalWrite(led-2,LOW);
    
  }
  else
  {
    int l,k=3;
    for(l=0;l<k;l++)
    {for(int y=0;y<2;y++)
    {digitalWrite(led-l,HIGH);
  delay(500);
    
  digitalWrite(led-l,LOW);
    delay(500);
    
    }}
  }
  i++;
}

//leds are connected at 11,12 and 13 in the above code
