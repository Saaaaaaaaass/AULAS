// C++ code
//
const int LED1 = 1;
void setup() 
{
  pinMode(LED1, OUTPUT);
}
void loop()
{
  digitalWrite(LED1, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED1, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
