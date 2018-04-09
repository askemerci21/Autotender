/*
 * kode til arduino nano for at stye bar robot 1
 * 1 stk servo til drink dispnser pistol
 * 1 stk stepper til bevægelse via easydriver 
 * 1 relæ
 * 1 blæser 
 * 
*/

#include <Servo.h>
#define dir 8
#define stp 9
Servo myservo;  // create servo object to control a servo
int pos_poor = 170;    // variable to store the servo poor
int pos_sluk = 10;    // variable to store the servo sluk

int dist = 0;        //temporery val for caunting

int Distance = 0;  // Record the number of steps we've taken

int x;             //counting val

void setup() {

  pinMode(2, OUTPUT); //Power control relay for servo
  digitalWrite(2, LOW);

  myservo.attach(5);  // attaches the servo on pin 9 to the servo object

 pinMode(dir,OUTPUT);
 pinMode(stp,OUTPUT);

  
  
  // initialize serial communication:
  Serial.begin(9600);

}

void loop() {
  digitalWrite(2, LOW);
  // read the sensor:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    // do something different depending on the character received.
    // The switch statement expects single number values for each case; in this
    // example, though, you're using single quotes to tell the controller to get
    // the ASCII value for the character. For example 'a' = 97, 'b' = 98,
    // and so forth:

    switch (inByte) {
      
      //----------------------------------------------Case a **GIN** -----------------------------------------------------------------
       case 'a':
           Serial.print("Gin");
           
                     //----------------------------------------------Case a stepper move-----------------------------------------------------------------
                    
                      for(x= dist; x<500; x++)  //Loop the forward stepping 
                      {
                       digitalWrite(dir, LOW);
                        digitalWrite(stp,HIGH); //Trigger one step forward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }
                       
                     for(x= dist; x>500; x--)  //Loop the bagward stepping 
                      {
                        digitalWrite(dir, HIGH);
                        digitalWrite(stp,HIGH); //Trigger one step bagward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }
                       Distance = 500;
                       dist = Distance;
                       //Serial.print("Distance =>");
                       //Serial.println(Distance); 
                        //Serial.println(dist);
                      //--------------------------------------------Case a servo bevægelse ----------------------------------------------------------------        
                        digitalWrite(2, HIGH);
                        myservo.write(pos_poor);              // tell servo to go to position in variable 'pos'
                        delay(15); 
                        delay(1000);
                        myservo.write(pos_sluk);              // tell servo to go to position in variable 'pos'
                        delay(15);
                        delay(1000);
                        digitalWrite(2, LOW);
                        Serial.print(" OK  ");
                        Serial.print("Distance =>");
                        Serial.println(Distance);
                        
        break;

   //----------------------------------------------Case b-----------------------------------------------------------------
      case 'b':
        Serial.print("Vodka");
             
             //----------------------------------------------Case b stepper move-----------------------------------------------------------------
                      
                      for(x= dist; x<1000; x++)  //Loop the forward stepping 
                      {
                       digitalWrite(dir, LOW);
                        digitalWrite(stp,HIGH); //Trigger one step forward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }
                       
                     for(x= dist; x>1000; x--)  //Loop the bagward stepping 
                      {
                      digitalWrite(dir, HIGH);
                        digitalWrite(stp,HIGH); //Trigger one step bagward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }
                       Distance = 1000;
                       dist = Distance;
                       //Serial.println(Distance);
                        //Serial.println(dist);
                      //--------------------------------------------Case b servo bevægelse ----------------------------------------------------------------        
                        digitalWrite(2, HIGH);
                        myservo.write(pos_poor);              // tell servo to go to position in variable 'pos'
                        delay(15); 
                        delay(1000);
                        myservo.write(pos_sluk);              // tell servo to go to position in variable 'pos'
                        delay(15);
                        delay(1000);
                        digitalWrite(2, LOW);
                        Serial.print(" OK  ");
                        Serial.print("Distance =>");
                        Serial.println(Distance);
        break;
        
   //----------------------------------------------Case c-----------------------------------------------------------------
      case 'c':
        Serial.print("Rom");

              //----------------------------------------------Case c stepper move-----------------------------------------------------------------

                      
                      for(x= dist; x<1500; x++)  //Loop the forward stepping 
                      {
                        digitalWrite(dir, LOW);
                        digitalWrite(stp,HIGH); //Trigger one step forward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                       }

                      for(x= dist; x>1500; x--)  //Loop the bagward stepping 
                      {
                      digitalWrite(dir, HIGH);
                        digitalWrite(stp,HIGH); //Trigger one step bagward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }

                       Distance = 1500;
                       dist = Distance;
                       //Serial.println(Distance);
                        //Serial.println(dist);
                      //--------------------------------------------Case c servo bevægelse ----------------------------------------------------------------        
                        digitalWrite(2, HIGH);
                        myservo.write(pos_poor);              // tell servo to go to position in variable 'pos'
                        delay(15); 
                        delay(1000);
                        myservo.write(pos_sluk);              // tell servo to go to position in variable 'pos'
                        delay(15);
                        delay(1000);
                        digitalWrite(2, LOW);
                        Serial.print(" OK  ");
                        Serial.print("Distance =>");
                        Serial.println(Distance);
        break;
        
   //----------------------------------------------Case d-----------------------------------------------------------------
      case 'd':
        Serial.print("Tonic");

        
              //----------------------------------------------Case d stepper move-----------------------------------------------------------------

                      
                      for(x= dist; x<2000; x++)  //Loop the forward stepping
                      {
                        digitalWrite(dir, LOW);
                        digitalWrite(stp,HIGH); //Trigger one step forward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                       }

                      for(x= dist; x>2000; x--)  //Loop the bagward stepping 
                      {
                      digitalWrite(dir, HIGH);
                        digitalWrite(stp,HIGH); //Trigger one step bagward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }

                       Distance = 2000;
                       dist = Distance;
                       //Serial.println(Distance);
                        //Serial.println(dist);
                      //--------------------------------------------Case d servo bevægelse ----------------------------------------------------------------        
                        digitalWrite(2, HIGH);
                        myservo.write(pos_poor);              // tell servo to go to position in variable 'pos'
                        delay(15); 
                        delay(1000);
                        myservo.write(pos_sluk);              // tell servo to go to position in variable 'pos'
                        delay(15);
                        delay(1000);
                        digitalWrite(2, LOW);
                        Serial.print(" OK  ");
                        Serial.print("Distance =>");
                        Serial.println(Distance);
        break;
        
   //----------------------------------------------Case e-----------------------------------------------------------------
       
      case 'e':
        Serial.print("Cola");

        
              //----------------------------------------------Case e stepper move-----------------------------------------------------------------

                      
                      for(x= dist; x<2500; x++)  //Loop the forward stepping 
                      {
                        digitalWrite(dir, LOW);
                        digitalWrite(stp,HIGH); //Trigger one step forward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                       }

                      for(x= dist; x>2500; x--)  //Loop the bagward stepping
                      {
                      digitalWrite(dir, HIGH);
                        digitalWrite(stp,HIGH); //Trigger one step bagward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }

                       Distance = 2500;
                       dist = Distance;
                       //Serial.println(Distance);
                        //Serial.println(dist);
                      //--------------------------------------------Case e servo bevægelse ----------------------------------------------------------------        
                        digitalWrite(2, HIGH);
                        myservo.write(pos_poor);              // tell servo to go to position in variable 'pos'
                        delay(15); 
                        delay(1000);
                        myservo.write(pos_sluk);              // tell servo to go to position in variable 'pos'
                        delay(15);
                        delay(1000);
                        digitalWrite(2, LOW);
                        Serial.print(" OK  ");
                        Serial.print("Distance =>");
                        Serial.println(Distance);
        break;
        
   //----------------------------------------------Case f-----------------------------------------------------------------
        case 'f':
        Serial.print("home");

        
              //----------------------------------------------Case f stepper move-----------------------------------------------------------------

                      
                      for(x= dist; x<0; x++)  //Loop the forward stepping 
                      {
                        digitalWrite(dir, LOW);
                        digitalWrite(stp,HIGH); //Trigger one step forward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                       }

                      for(x= dist; x>0; x--)  //Loop the bagward stepping
                      {
                      digitalWrite(dir, HIGH);
                        digitalWrite(stp,HIGH); //Trigger one step bagward
                        delay(1);
                        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
                        delay(1);
                        
                       }

                       Distance = 0;
                       dist = Distance;
                       //Serial.println(Distance);
                        //Serial.println(dist);
                      //--------------------------------------------Case f servo bevægelse ----------------------------------------------------------------        

                        
                        Serial.print(" OK  ");
                        Serial.print("Distance =>");
                        Serial.println(Distance);
        break;
        
      


    }
  }
}
