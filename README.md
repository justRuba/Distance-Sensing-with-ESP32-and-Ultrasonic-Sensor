# Distance-Sensing-with-ESP32-and-Ultrasonic-Sensor
This project utilizes an ESP32 microcontroller and an ultrasonic sensor to measure distances accurately. The measured distance is calculated based on the time it takes for ultrasonic pulses to travel to a target and back, using the speed of sound in air.

- Virtual Simulation: Utilizes the Wokwi platform for simulation.

## The Components:

- ESP32:
  
![ESP32](https://github.com/user-attachments/assets/a88d1aa8-bae2-49cd-991a-c249219b5330)

- UltraSonaic
  
![UltraSonaic](https://github.com/user-attachments/assets/547fae7e-9a9e-425a-836e-9b5c43c31f7b)

## The Circuit:

![Circuit](https://github.com/user-attachments/assets/329c6552-807b-4792-9fc0-580978b722e8)

## The Code:

```
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
```
The code repeatedly measures the distance using the ultrasonic sensor and ESP32. It sends a short pulse to the sensor's trigger pin, listens for the echo on the echo pin, calculates the distance based on the time it takes for the echo to return, and then prints the distance in centimeters to the serial monitor every second.

Project Link: https://wokwi.com/projects/403246358084998145
