//PROGETTO MARAZZATO MATTEO
  int mosse[100];
  int numturno = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  bool fineturno = false;
  
  Serial.println("TURNO 1");
  
  while (fineturno == false)
  {
    if (Serial.available())
    {
      int comando = Serial.read();
      mosse[numturno] = comando;

      Serial.println((char)comando);

      numturno++;
      fineturno = true;
    }
  }
  
  fineturno = false;

  delay(2000);
  
  Serial.println("TURNO 2");

  while (fineturno == false)
  {
      if (Serial.read() != "")
      {
        
      }

      else if (Serial.read() == "")
      {
        int comando = Serial.read();
      mosse[numturno] = comando;

      Serial.println((char)comando);
      numturno++;
      fineturno = true;
      }
  }

  delay(500);

}
