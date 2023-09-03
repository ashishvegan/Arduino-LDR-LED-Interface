/* Arduino LDR - Light Sensor Interface Code
  Author: Ashish Vegan (Tech Vegan) https://www.ashishvegan.com
  #Please Subscribe YouTube Channel - Tech Vegan
  #Link: https://bit.ly/2MFT35Q

  ######For Specific Project Requirement Please Email Me
  ######Email: technologyvegan@gmail.com

  #Get Internet of Things, Arduino, Web Development, Ethical Hacking Videos, Computer Mobile Tips, etc.
*/
int ldrPin = A0;
int led = 7;
int threshold = 70;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop()
{
  int data = analogRead(ldrPin);
  Serial.println("");
  Serial.print("Light Sensor ");
  Serial.print("Value = ");
  Serial.print(data);
  if(data <= threshold)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
/*
 * Stay Tuned
 * More Projects Coming Soon
 * Help To Grow My Channel - Like, Share, Subscribe & Comment
 */
