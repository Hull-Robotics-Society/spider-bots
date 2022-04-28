#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
Servo myservo1;
Servo myservo2;
Servo myservo3;

int pos = 0;    // variable to store the servo position 
int NOS = 4;
int one = 0;

void setup() 
{ 
  myservo.attach(4);  // attaches the servo on pin 9 to the servo object 
  myservo1.attach(6);
  myservo2.attach(7);
  myservo3.attach(8);
} 
 
 
void loop() 
{ 
  start();
//  Move_one();
//  delay(1000000);
  //Move_two();

} 
void start()
{
  myservo.write(0);
  myservo1.write(100);
  myservo2.write(0);
  myservo3.write(10);
}
void Move_one()
{
  for(NOS = 0; NOS < 4; NOS +=1)
  {
      if(NOS == 1)
      {
        for(pos = 10; pos < 90; pos += 1) 
        {                                  
          myservo.write(pos);
          delay(15);                     
        }
      }
      else if(NOS == 3)
      {
        for(pos = 10; pos < 90; pos += 1) 
        {                                  
          myservo2.write(pos);
          delay(15);                     
        }
      }
      else if(NOS == 2)
      {
        for(pos = 90; pos >= 10; pos -= 1) 
        {                                  
          myservo1.write(pos);
          delay(15);                     
        }
      }
      else if (NOS == 4)
      {
        for(pos = 90; pos >= 10; pos -= 1) 
        {                                  
          myservo3.write(pos);
          delay(15);                     
        }
      }
      delay(100);
    } 
}
void Move_two()
{
  for(NOS = 4; NOS < 0; NOS -=1)
  {
      if(NOS == 1)
      {
        for(pos = 90; pos >= 10; pos -= 1) 
        {                                  
          myservo.write(pos);
          delay(15);                     
        }
      }
      else if(NOS == 3)
      {
        for(pos = 90; pos >= 10; pos -= 1) 
        {                                  
          myservo2.write(pos);
          delay(15);                     
        }
      }
      else if(NOS == 2)
      {
        for(pos = 10; pos < 90; pos += 1) 
        {                                  
          myservo2.write(pos);
          delay(15);                     
        }
      }
      else if (NOS == 4)
      {
        for(pos = 10; pos < 90; pos += 1) 
        {                                  
          myservo.write(pos);
          delay(15);                     
        }
      }
      
    } 
}
