int pino_a =2;
int pino_b =3;
int pino_c =4;
int pino_d =5;
int pino_e =6;
int pino_f =7;
int pino_g =8;
int led_verd = 11;
int led_yel = 10;
int led_ver = 9;

void setup()
{
  pinMode(pino_a, OUTPUT);
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT);
  pinMode(pino_e, OUTPUT);
  pinMode(pino_f, OUTPUT);
  pinMode(pino_g, OUTPUT);
  pinMode (led_verd, OUTPUT);
  pinMode(led_yel, OUTPUT);
  pinMode(led_ver, OUTPUT);
}

void loop()
{
	digitalWrite(led_verd, LOW);
    digitalWrite(led_yel, HIGH);
  	digitalWrite(led_ver, HIGH);
    visor();
  delay(500);
  digitalWrite(led_verd, HIGH);
    digitalWrite(led_yel, LOW);
  	digitalWrite(led_ver, HIGH);
    visor();
  delay(500);
  digitalWrite(led_verd, HIGH);
    digitalWrite(led_yel, HIGH);
  	digitalWrite(led_ver, LOW);
    visor();
  delay(500);
  
  
}
void visor()
{
   digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  
 delay(1000);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  
  delay(500);
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_g, HIGH);
  digitalWrite(pino_e, HIGH);
  digitalWrite(pino_d, HIGH);
  
  delay(1000);
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_g, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_d, LOW);
  
  delay(500);
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_g, HIGH);
  
  delay(1000);
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
   digitalWrite(pino_g, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_d, LOW);
  
  delay(500);
digitalWrite(pino_f, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_g, HIGH);
  
  delay(1000);
	digitalWrite(pino_f, LOW);
 	digitalWrite(pino_b, LOW);
  	digitalWrite(pino_c, LOW);
    digitalWrite(pino_g, LOW);
  
delay(500);
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_g, HIGH);
  
  delay(1000);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_c, LOW);
    digitalWrite(pino_g, LOW);
 

}