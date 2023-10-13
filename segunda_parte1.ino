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
  float porcentagem = ((float)an)*100/1023;
  int saida = porcentagem*255/100;
  for(int a=1;a<=255;a=a+1){
    analogWrite(3, saida);
}
}