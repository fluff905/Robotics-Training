int motorPwm=0;
int s1=13;
int s2=12;
int s3=11;
int s4=7;

bool s1check;
bool s2check;
bool s3check;
bool s4check;

void setup()
{	
  
  //motor 1
  pinMode(10,OUTPUT); //reverse for motor1
  pinMode(9, OUTPUT); //forward for motor 1
  //motor 2
  pinMode(5, OUTPUT); // forward for motor 2
  pinMode(3, OUTPUT); //reverse for motor2
  
  //switches
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  s1check = digitalRead(s1); 
  s2check = digitalRead(s2);
  s3check = digitalRead(s3);
  s4check = digitalRead(s4);
  
  int pot = analogRead(A0); 
  if (s1check == false && s2check == false && s3check == false && s4check == false){
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(5,LOW);
    digitalWrite(3,LOW);
  }
  if (s1check == true && s2check == false && s3check == false && s4check == false){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (5, motorPwm); 
 	 analogWrite(9, motorPwm); 
  }
  
    if (s1check == false && s2check == true && s3check == false && s4check == false){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (3, motorPwm); 
 	 analogWrite(5, motorPwm); 
  }
  
      if (s1check == false && s2check == false && s3check == true && s4check == false){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (9, motorPwm); 
 	 analogWrite(3, motorPwm); 
  }
  
      if (s1check == false && s2check == false && s3check == false && s4check == true){
    
  	int pot = analogRead(A0); 
 	 motorPwm = map (pot, 1023, 0, 1, 255); 
  
 	 analogWrite (5, motorPwm); 
 	 analogWrite(10, motorPwm); 
  }
}