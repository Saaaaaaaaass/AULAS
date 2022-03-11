// C++ code
//

const int bt1 = 2;
const int bt2 = 3;
const int bt3 = 4;
const int bt4 = 5; 
const int bt5 = 6;

int var1;
int var2;
int var3;
int var4;
int var5;

void setup()
{
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  pinMode(bt3, INPUT);
  pinMode(bt4, INPUT);
  pinMode(bt5, INPUT);
  Serial.begin(9000);
}

void loop()
{
  var1 = digitalRead(bt1);
  var2 = digitalRead(bt2);
  var3 = digitalRead(bt3);
  var4 = digitalRead(bt4);
  var5 = digitalRead(bt5);
  
  if (var1){
    Serial.println("ilikespaghetti");
  }
  
  if (var2){
    Serial.println("iliketosleep");
  }
  
  if (var3){
    Serial.println("RECEBA");
  }
  
  if (var4){
    Serial.println("nahjitcrazyyyy");
  }
  
  if (var5){
    Serial.println("imliquidsmooth");
  }
  delay(10);
}
