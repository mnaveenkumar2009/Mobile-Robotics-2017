#define DW digitalWrite
#define AW analogWrite
#define c clockwise
#define ac anticlockwise
#define f(i,n) for(i=0;i<n;i++)
// assume clockwise rotation in the pic as forward rotation
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
void s()
{delay(5000);
}
void loop() {
  sharpleft(255);
  s();
  sharpright(255);
  s();
  
}
