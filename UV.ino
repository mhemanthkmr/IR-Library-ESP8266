const int trigPin = 23;
const int echoPin = 22;
const int lightPin = 2;
const int redPin = 15;
const int greenPin = 18;
const int bluePin = 19;

//define sound speed in cm/uS
#define SOUND_SPEED 0.034
#define CM_TO_INCH 0.393701

long duration;
float distanceCm;
float distanceInch;

void setup() {
  Serial.begin(115200); // Starts the serial communication
  pinMode(trigPin, OUTPUT);
  pinMode(lightPin, OUTPUT);// Sets the trigPin as an Output
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance
  distanceCm = duration * SOUND_SPEED/2;
  
  // Convert to inches
  distanceInch = distanceCm * CM_TO_INCH;
  
  // Prints the distance in the Serial Monitor
  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);
  Serial.print("Distance (inch): ");
  Serial.println(distanceInch);

  if(distanceCm >= 0.1 and distanceCm <= 5)
  {
    Serial.println("5 CM LOW");
    digitalWrite(redPin,LOW);
    delay(2000);
    digitalWrite(redPin,HIGH);
  }
  else if (distanceCm >= 5 and distanceCm <= 10 )
  {
    digitalWrite(greenPin,LOW);
    delay(2000);
    digitalWrite(greenPin,HIGH);
  }
  else if (distanceCm >= 10 and distanceCm <= 15 )
  {
    digitalWrite(bluePin,LOW);
    delay(2000);
    digitalWrite(bluePin,HIGH);

  }
  else
  {
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,HIGH);

  }
  delay(1000);
}
