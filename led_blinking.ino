const int ledPin = 8;//this tells the arduino that the led is in digital pin 8

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin , OUTPUT);//this tells the arduino that the led is the output or this is what will blink.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);//this tells the arduino that the led will be bright.
  delay(500);//and this is to tell the arduino that it will stay bright for 500 milliseconds

  digitalWrite(ledPin,LOW);//this tells the arduino that the led will be off
  delay(500);// this is another pause that the led will stay off and this prosess will repeat forever.

}
