const int LED=9;  //9번 핀을 사용하는 LED 상수 정의

void setup()
{
  pinMode(LED,OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop()
{
  for(int i=50; i<=1000; i=i+100)
  {
    digitalWrite(LED, HIGH);
    delay(i);
    digitalWrite(LED, LOW);
    delay(i);
    Serial.println(i);
  }
}
