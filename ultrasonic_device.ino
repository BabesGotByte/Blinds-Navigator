
// trig is the source from which sound emmits out
// echo is the destination, where the signals are 
#define trig 9
#define echo 10


// prototype of a function
int abe(void);
void Read(void);

//variables delecaration
long duration;
long distance;
long y;
boolean on=false;
int buzzer=12;
int state=0;

//a button to turn on and off the device
int button=5;
int buttonState=0;
void setup() {
  // put your setup code here, to run once:
  // either the variable works as output or as input
  pinMode(buzzer,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}


void loop() {
  long j,k;
  buttonState=digitalRead(button);
  //read button state
  Read();
  if(state==1){

  //k is the distance of the object from the person
  k=abe();
  
  //if the distance is less than 1 metre ,then first weep will be smaller and then continously for the remaining cases we get longer weeps
   if((k<100)&&(k>0)){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
    }

    //if the distance is less than 2 metre ,then first two weeps will be smaller and then continously for the remaining cases we get longer weeps
    else if((k>=100)&&(k<200)){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
    }

    
    //if the distance is less than 3 metre ,then first three weeps will be smaller and then continously for the remaining cases we get longer weeps
    else if((k>=200)&&(k<300)){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
       digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
    }

    
    //if the distance is above 3 metre or equal to 3 metre ,then first four weeps will be smaller and then continously for the remaining cases we get longer weeps
    else if(k>=300){ 
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(100);
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(100);
     } 
}
}
int abe(void){
   // put your main code here, to run repeatedly:
   //Initially trig is low 
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  //Then we make the trig HIGH
  digitalWrite(trig,HIGH);
  delayMicroseconds(6);
  digitalWrite(trig,LOW);

  //Calculating the time duration for the signal
  duration=pulseIn(echo,HIGH);
  //Calculating the distance between the object and the person
  distance=(duration*(0.032))/2;

  Serial.print("Distance: ");
  Serial.println(distance);
  return (distance);
}
void Read(){
  buttonState=digitalRead(button);
  if(buttonState==HIGH){
    if(state==0){
      state=1;
  }
    else if(state==1){
      state=0;
  }
  }
}
