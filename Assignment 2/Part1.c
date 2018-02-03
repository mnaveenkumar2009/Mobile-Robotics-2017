#define DW digitalWrite
#define AW analogWrite
#define c clockwise
#define ac anticlockwise
#define f(i,n) for(i=0;i<n;i++)
// assume clockwise rotation in the pic as forward rotation
boolean lastButton = LOW;
boolean xxx = false;
boolean currentButton = LOW;
void setup() {                
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
         
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
     
}
void anticlockwise(int i,int value)
{
  if(i)
  {
    //left motor
    AW(10,value);
  }
  else
  {//right
    AW(11,value);
  }
}
void clockwise(int i,int value)
{
  if(i)
  {
    //left
    AW(9,value);
  }
  else
  {//right
    AW(6,value);
  }
}
void sharpleft(int value)
{
  
  c(1,0);
  ac(1,value);
  c(0,value);
  ac(0,0);
}
void sharpright(int value)
{
  
  c(1,value);
  ac(0,value);
  c(0,0);
  ac(1,0);
}
void rightturn(int value)
{
  c(1,0);
  ac(1,0);
  c(0,value);
  ac(0,0);
  
}
void leftturn(int value)
{
  
  c(1,value);
  ac(1,0);
  c(0,0);
  ac(0,0);
}
void straight(int value)
{
  
  c(1,value);
  ac(1,0);
  c(0,value);
  ac(0,0);
}
void reverse(int value)
{
  
  c(1,0);
  ac(1,value);
  c(0,0);
  ac(0,value);
}
void s()
{delay(3000);
}
void loop() {
 
  currentButton = digitalRead(7); 
  if (lastButton == LOW && currentButton == HIGH)
  {
  	xxx = !xxx;
     }
  lastButton = currentButton;
  if(xxx)
  {straight(255);
  }
  else
  {
    c(0,0);ac(0,0);c(1,0);ac(1,0);
  }
}
