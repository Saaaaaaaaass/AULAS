// C++ code
//

const int LED1 = 1;
const int BT1 = 2;
  
int var1;

void setup()
{
 pinMode(LED1, OUTPUT);
 pinMode(BT1, INPUT);
}

void loop()
{
  var1 = digitalRead(BT1);
  
  if (var1){
    digitalWrite(LED1, LOW);
   
  }else{
    digitalWrite(LED1, HIGH);
  }
}
