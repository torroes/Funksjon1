
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
