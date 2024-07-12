int trigPin = 5;        
int echoPin = 18;        
long duration;           
float speedOfSound = 0.034; 
float distanceInCm;    

void setup() {
  Serial.begin(115200);   
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);  
}

void loop() {
  digitalWrite(trigPin, LOW);      
  delayMicroseconds(2);             
  digitalWrite(trigPin, HIGH);      
  delayMicroseconds(10);      
  digitalWrite(trigPin, LOW);      

  duration = pulseIn(echoPin, HIGH); 

  distanceInCm = duration * speedOfSound / 2; 
  Serial.print("Distance measured: ");
  Serial.print(distanceInCm);
  Serial.println(" cm");     

  delay(1000); 
}
