// C++ code
//

const int LED1 = 1;
const int LED2 = 2;
const int LED3 = 3;
const int LED4 = 4;
const int LED5 = 5;

void setup()
  
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(2000);// Wait 2000 millisecond(s)
  digitalWrite(LED2, HIGH);
  delay(2000);// Wait 2000 millisecond(s)
  digitalWrite(LED3, HIGH);
  delay(2000);// Wait 2000 millisecond(s)
  digitalWrite(LED4, HIGH);
  delay(2000);// Wait 2000 millisecond(s)
  digitalWrite(LED5, HIGH);
  delay(2000);// Wait 2000 millisecond(s)
    
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(2000);// Wait 2000 millisecond(s)
}
