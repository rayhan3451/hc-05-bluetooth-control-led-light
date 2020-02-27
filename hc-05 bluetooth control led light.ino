int p, a=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0;
char D=0;
void setup(){
  Serial.begin(9600);
  for(p=2;p<=13;p++){
    pinMode(p,OUTPUT);
  }
}
void loop(){
  if(Serial.available()>0){
    D=Serial.read();
    if(D=='1' && a==0)
    {
      digitalWrite(2,01);
      a=1;
      Serial.println("LED 1 ON\n");
    }
    else if(D=='1' && a==1)
    {
      digitalWrite(2,00);
      a=0;
      Serial.println("LED 1 OFF\n");
    }
    if(D=='2' && a1==0)
    {
      digitalWrite(3,01);
      a1=1;
      Serial.println("LED 2 ON\n");
    }
    else if(D=='2' && a1==1)
    {
      digitalWrite(3,00);
      a1=0;
      Serial.println("LED 2 OFF\n");
    }
     if(D=='3'  && a2==0)
    {
      digitalWrite(4,01);
      a2=1;
      Serial.println("LED 3 ON\n");
    }
    else if(D=='3' && a2==1)
    {
      digitalWrite(4,00);
      a2=0;
      Serial.println("LED 3 OFF\n");
    }
     if(D=='4' && a3==0)
    {
      digitalWrite(5,01);
      a3=1;
      Serial.println("LED 4 ON\n");
    }
    else if(D=='4' && a3==1)
    {
      digitalWrite(5,00);
      a3=0;
      Serial.println("LED 4 OFF\n");
    }
     if(D=='5' && a4==0)
    {
      digitalWrite(6,01);
      a4=1;
      Serial.println("LED 5 ON\n");
    }
    else if(D=='5' && a4==1)
    {
      digitalWrite(6,00);
      a4=0;
      Serial.println("LED 5 OFF\n");
    }
     if(D=='6' && a5==0)
    {
      digitalWrite(7,01);
      a5=1;
      Serial.println("LED 6 ON\n");
    }
    else if(D=='6' && a5==1)
    {
      digitalWrite(7,00);
      a5=0;
      Serial.println("LED 6 OFF\n");
    }
    if(D=='7' && a6==0)
    {
      digitalWrite(8,01);
      a6=1;
      Serial.println("LED 7 ON\n");
    }
    else if(D=='7' && a6==1)
    {
      digitalWrite(8,00);
      a6=0; 
      Serial.println("LED 7 OFF\n");
    }
    if(D=='8' && a7==0)
    {
      digitalWrite(9,01);
      a7=1;
      Serial.println("LED 8 ON\n");
    }
    else if(D=='8' && a7==1)
    {
      digitalWrite(9,00);
      a7=0;
      Serial.println("LED 8 OFF\n");
    }
    if(D=='9' && a8==0)
    {
      digitalWrite(10,01);
      a8=1;
      Serial.println("LED 9 ON\n");
    }
    else if(D=='9' && a8==1)
    {
      digitalWrite(10,00);
      a8=0;
      Serial.println("LED 9 OFF\n");
    }
    if(D=='10' && a9==0)
    {
      digitalWrite(11,01);
      a9=1;
      Serial.println("LED 10 ON\n");
    }
    else if(D=='10' && a9==1)
    {
      digitalWrite(11,00);
      a9=0;
      Serial.println("LED 10 OFF\n");
    }
    if(D=='11' && a10==0)
    {
      digitalWrite(12,01);
      a10=1;
      Serial.println("LED 11 ON\n");
    }
    else if(D=='11' && a10==1)
    {
      digitalWrite(12,00);
      a10=0;
      Serial.println("LED 11 OFF\n");
    }
    if(D=='12' && a11==0)
    {
      digitalWrite(13,01);
      a11=1;
      Serial.println("LED 12 ON\n");
    }
    else if(D=='12' && a11==1)
    {
      digitalWrite(13,00);
      a11=0;
      Serial.println("LED 12 OFF\n");
    }
  }
  
}
