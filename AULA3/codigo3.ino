// C++ code
//

const int LED3 = 3;
const int LED4 = 4;
const int LED5 = 5;
const int LED6 = 6;
const int LED7 = 7;

const int botao1 = 8;
const int botao2 = 9;
const int botao3 = 10;

int var1;
int var2;
int var3;

void setup()
{
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
}

void loop()
{
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);

  if(var1){
    acendeImpar();
  }
  
  if(var2){
    acendePar();
  }
  if(var3){
    apagaTudo();
  }
}
  
  void acendeImpar(){
    digitalWrite(LED3, HIGH);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED7, HIGH);
  }
  void acendePar(){
    digitalWrite(LED4, HIGH);
    digitalWrite(LED6, HIGH);
  }
  void apagaTudo(){
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
  }
