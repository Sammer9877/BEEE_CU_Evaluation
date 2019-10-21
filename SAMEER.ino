int button = 0;
int ldr = 0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  button = digitalRead(2);
  if (button == HIGH) {
    digitalWrite(13, HIGH);
  }
  delay(100); // Wait for 100 millisecond(s)
ldr = analogRead(A0);
Serial.println(ldr);
if(ldr>=500)
	{
	    digitalWrite(13, LOW);
	}
 else
 {
     digitalWrite(13, HIGH);

 }

}