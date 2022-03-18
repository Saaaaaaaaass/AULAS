// C++ code
//

const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;
const int led10 = 11;

const int bt1 = 12;
const int bt2 = 13;
const int bt3 = 1;

int var1;
int var2;
int var3;

void setup()
{
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);
 pinMode(led8, OUTPUT);
 pinMode(led9, OUTPUT);
 pinMode(led10, OUTPUT);
 pinMode(bt3, INPUT);
 pinMode(bt2, INPUT);
 pinMode(bt1, INPUT);
}

void loop()
{
  var1 = digitalRead(bt1);
  var2 = digitalRead(bt2);
  var3 = digitalRead(bt3);
  
  if (var1){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    delay(1000);// Wait a 1000 millisecond(s)
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    delay(1000);// Wait a 1000 millisecond(s)
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
  
  if (var2){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    delay(1000);// Wait a 1000 millisecond(s)
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    delay(1000);// Wait a 1000 millisecond(s)
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    delay(1000);// Wait a 1000 millisecond(s)
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
  
  if (var3){
    digitalWrite(led1, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led2, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led3, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led4, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led5, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led6, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led7, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led8, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led9, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led10, HIGH);
    delay(1000);//Wait a 1000 millisecond(s)
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
}
