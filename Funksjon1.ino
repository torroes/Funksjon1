/*
lag en løsning med en knapp slik at hvis knappen er trykket inn vil en funksjon legge sammen tall a og b 
eller at hvis knappen ikke er trykket vil en annen funksjon multiplisere  tallene
*/


int a = 4;
int b = 5;

void setup() 
{
 Serial.begin(9600); 
}

void loop() 
{
 sum = leggeSammenTall(a, b); 
 Serial.println(sum);
 delay(500);
}


int leggeSammenTall(int x, int y)
{
  int resultat;
  resultat = x + y;
  return resultat
}
