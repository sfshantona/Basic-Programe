//take an output from serial monitor
void setup()
{
 Serial.begin(9600);
 
}

void loop()
{
     //int a=Serial.parseInt();
    //float a=Serial.parseFloat();
   //char a=Serial.read();
 String a=Serial.readString();
 Serial.println(a);  
  delay(1000);
}