#include <IRremote.h>
int IR_Recv = 5;   
int GPIO_14 = 14;
int GPIO_12 = 12;
int GPIO_13 = 13;
int status = 0;
int status1 = 0 ,status2 = 0,status3 = 0;

IRrecv irrecv(IR_Recv);
decode_results results;
void setup(){
  Serial.begin(9600);  //starts serial communication
  irrecv.enableIRIn(); // Starts the receiver
  pinMode(GPIO_14, OUTPUT);      // sets the digital pin as output
  pinMode(GPIO_12, OUTPUT);      // sets the digital pin as output
  pinMode(GPIO_13, OUTPUT);      // sets the digital pin as output 
}
void loop(){
  if (irrecv.decode(&results)){
    long int decCode = results.value;
    Serial.println(results.value);
    switch (results.value){
      case 2160019894: // Press 1 to Turn on and Off
        if(status1 == 0)
        {
          digitalWrite(GPIO_14, HIGH);
          status1 = 1;
        }
        else if(status1 == 1)
        {
          digitalWrite(GPIO_14, LOW);
          status1 = 0;
        }
        break;   
      case 551495895: // Press 2 to Turn on and Off
        digitalWrite(GPIO_14, LOW);   
        break;
       case 2160052534: 
        if(status2 == 0)
        {
          digitalWrite(GPIO_12, HIGH);
          status2 = 1;
        }
        else if(status2 == 1)
        {
          digitalWrite(GPIO_12, LOW);
          status2 = 0;
        }
        break;            
       case 2160014284: // Press 2 to Turn on and Off
        if(status3 == 0)
        {
          digitalWrite(GPIO_13, HIGH);
          status3 = 1;
        }
        else if(status3 == 1)
        {
          digitalWrite(GPIO_13, LOW);
          status3 = 0;
        }
        break;        
       case 2160030094: // Press 4 for multi color
        multiColor();
        multiColor();
        break;
       case 2160058654: //when you press the 6 button
        digitalWrite(GPIO_13, LOW);
        digitalWrite(GPIO_12, LOW);
        digitalWrite(GPIO_14, LOW);
        break;
       case 2160016324: //when you press the Power On button
        if(status == 0)
        {
          digitalWrite(GPIO_13, HIGH);
          digitalWrite(GPIO_12, HIGH);
          digitalWrite(GPIO_14, HIGH);
          status = 1;
        }
        else if(status == 1)
        {
          digitalWrite(GPIO_13, LOW);
          digitalWrite(GPIO_12, LOW);
          digitalWrite(GPIO_14, LOW);
          status = 0;
        }
        break;
    }
    irrecv.resume(); // Receives the next value from the button you press
  }
  delay(10);
}
void multiColor()
{
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  delay(100);
  digitalWrite(GPIO_12, HIGH);
  delay(100);
  digitalWrite(GPIO_12, LOW);
  delay(100);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  digitalWrite(GPIO_12, HIGH);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  digitalWrite(GPIO_12, LOW);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  digitalWrite(GPIO_12, HIGH);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  digitalWrite(GPIO_12, LOW);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  digitalWrite(GPIO_12, HIGH);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  digitalWrite(GPIO_12, LOW);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  digitalWrite(GPIO_12, HIGH);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  digitalWrite(GPIO_12, LOW);
  digitalWrite(GPIO_13, LOW);
  delay(100);
  digitalWrite(GPIO_14, HIGH);
  digitalWrite(GPIO_12, HIGH);
  digitalWrite(GPIO_13, HIGH);
  delay(100);
  digitalWrite(GPIO_14, LOW);
  digitalWrite(GPIO_12, LOW);
  digitalWrite(GPIO_13, LOW);
  delay(100);
}
