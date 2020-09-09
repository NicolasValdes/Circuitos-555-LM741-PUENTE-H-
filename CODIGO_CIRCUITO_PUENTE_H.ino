/*El siguiente circuito permite a un motor de corriente continua
poder cambiar su sentido de giro (permitiéndole ambos sentidos de giro)
Por otra parte, el circuito Puente H y en especial la versión L293D
tiene la capacidad de controlar corriente de hasta 600 mA en cada circuito 
y tensiones entre 4,5 a 36 V.


 En el siguiente apartado "void setup ()" se definen 
 los pines 8, 9 y 13 como salidas*/
void setup() 
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13,OUTPUT);
}

void CambiaLed(){
  digitalWrite(13,!digitalRead(13));//Se lee el pin digital 13
}

void loop() 
{
  digitalWrite(9, HIGH);// Se activa el pin 9
  digitalWrite(8, LOW);// Se desactiva el pin 8
  delay(2000); // Espera 2 segundos ( milisegundos)
  digitalWrite(9, HIGH);//Se activa el pin 9
  digitalWrite(8, HIGH);//Se activa el pin 8
  delay(500); // Espera medio segundo (500 milisegundos)
  digitalWrite(8, HIGH);//Se activa el pin 8
  digitalWrite(9, LOW);//Se desactiva el pin 9
  delay(2000); // Espera 2 segundos (2000 milisegundos)
  CambiaLed(); 
}
