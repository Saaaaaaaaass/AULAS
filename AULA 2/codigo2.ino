// C++ code
//

const int LED3 = 3;
const int LED4 = 4;
const int LED5 = 5;
const int LED6 = 6;
const int LED7 = 7;

void setup()
{
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
}

void loop()
{
  acendeTudo();
  delay(1000);
  apagarTudo();
  delay(1000);
}

void acendeTudo(){
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
}

void apagarTudo(){
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
}
  
