int trigPin = 7;  
int echoPin = 8;
int LEDR = 10;
int LEDV = 11;
float Speed = 0.0343;  
long duration, distance;

void setup()
{
   pinMode(trigPin, OUTPUT);  

   pinMode(echoPin, INPUT);   

   pinMode(LEDR, OUTPUT);   

   pinMode(LEDV, OUTPUT);   

   digitalWrite (LEDR , LOW);  

   digitalWrite (LEDV , LOW);  
}
void loop()
 {   
   digitalWrite(trigPin, LOW);        

   delayMicroseconds(2);              

   digitalWrite(trigPin, HIGH);        
   delayMicroseconds(10);             

   digitalWrite(trigPin, LOW);         

   duration = pulseIn(echoPin, HIGH) ; 

   distance = Speed* duration / 2;   

   if ( distance <= 50){
       digitalWrite (LEDR , HIGH);     

       digitalWrite (LEDV , LOW);      

   }
    else if ( distance >= 6) {       
       digitalWrite (LEDR , LOW);    
       digitalWrite (LEDV , HIGH);   
 }
 }
