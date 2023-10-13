// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop()
{
  int an = analogRead(A0);
  float volt = ((float)an)*5/1023;
  int temperatura = ((volt - 0.1)/0.01)-40;
  if (temperatura>50){
  	digitalWrite(3, HIGH);
  }
  if (temperatura>10){
  	digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
  
  Serial.print("Valor AN:");
  Serial.print(an);
  Serial.print("Tensão:");
  Serial.print(volt);
  Serial.print("Temperatura:");
  Serial.println(temperatura);
  
  delay(1000);
}