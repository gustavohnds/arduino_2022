void setup()
{
  pinMode(A5, INPUT);
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int potenciometro = analogRead(A5);
  float D = ((float)potenciometro)*100/1023;
  int PWM = D*255/100;
  digitalWrite(7, HIGH);
  digitalWrite(8,LOW);
  analogWrite(3,PWM);
  Serial.print("Razao ciclica =");
  Serial.print(D);
  Serial.print(",PWM =");
  Serial.println(PWM);
  delay(500);
}