// C++ code
//

const int BT1 = 2;
const int BT2 = 3;
const int BT3 = 4;
const int BT4 = 5;
const int BT5 = 6;
const int BT6 = 7;
const int BT7 = 8;

int var1;
int var2;
int var3;
int var4;
int var5;
int var6;
int var7;

void setup()
{
  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);
  pinMode(BT3, INPUT);
  pinMode(BT4, INPUT);
  pinMode(BT5, INPUT);
  pinMode(BT6, INPUT);
  pinMode(BT7, INPUT);
  Serial.begin(9000);
  
}

void loop()
{
 var1 = digitalRead(BT1);
 var2 = digitalRead(BT2);
 var3 = digitalRead(BT3);
 var4 = digitalRead(BT4);
 var5 = digitalRead(BT5);
 var6 = digitalRead(BT6);
 var7 = digitalRead(BT7);
  
  if (var1){
    Serial.println("DO");
  }
  
  if (var2){
    Serial.println("RE");
  }
  
  if (var3){
    Serial.println("MI");
  }
  
  if (var4){
    Serial.println("FA");
  }
  
  if (var5){
    Serial.println("SOL");
  }
  
  if (var6){
    Serial.println("LA");
  }
  
  if (var7){
    Serial.println("SI");
  }
  
  delay(10);
}
