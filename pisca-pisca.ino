void setup()
{
  //Define a porta do Arduino como saida
  pinMode(12, OUTPUT);
}
   
void loop()
{
  //Acende led
  digitalWrite(12, HIGH);
  delay(20);
  digitalWrite(12, LOW);
  delay(20);
  digitalWrite(11, HIGH);
  delay(20);
  digitalWrite(11, LOW);
  
  //Aguarda intervalo de tempo (milissegundos)
  delay(10);
}