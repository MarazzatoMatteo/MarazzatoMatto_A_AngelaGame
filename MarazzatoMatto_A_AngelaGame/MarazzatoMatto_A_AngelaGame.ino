//PROGETTO MARAZZATO MATTEO
int comando;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  /*while (unavolta == false)
  {
    delay(2000);
    turno1();
    delay(2000);
    Serial.println("STOP");
    unavolta = true;
  }

  while (unavolta == true)
  {
    delay(2000);
    turno1();
    delay(2000);
    Serial.println("STOP");
    unavolta = false;
  }*/

  Serial.println("TURNO 1");
  while (Serial.available() == 0){} //indica quanti byte sono presenti nella casella di inserimento del monitor seriale (attraverso la codifica ASCII, null=0, 0=48, ...)
  comando = Serial.parseInt(); //o Serial.read();
  Serial.println(comando);

  delay(1000);

  Serial.println("TURNO 2");
  while (Serial.available() == 0){}
  comando = Serial.parseInt();
  Serial.println(comando);

  delay(1000);

  /*while (Serial.available() == 0);
  delay(100);

  int val = Serial.read();

  Serial.println(val);*/
  
  
  
}

void turno1()
{
  //bool fineturno = false;
  
  Serial.println("TURNO 1");
  
  while (Serial.available() == 0)
  {}
  int comando = Serial.read();
  //mosse[numturno] = comando;
  Serial.println((char)comando);
  //numturno++;
}

void turno2()
{
}
