//definimos el pin 10 como el pin E1 del integrado L293D
#define E1 10 
//definimos el pin8  como el pin I1 del integrado L293D
#define I1 8 
// declaramo el pin A0 para el sensor
int sensor_gas= A0;
// declaramos la variable result como un entero y la iniciamos como 0
int result=0;
// declaramos ld que es del pin 3
int ld=3;

//funcion de iniciacion del codigo
void setup()
{
  // iniciamos un for para activar los pines del integrado L293D
    for (int i = 8 ; i<11 ; i++) 
     //configuramos el modo de trabajo como entrada en i
        pinMode( i, OUTPUT);
//configuramos el modo de trabajo como entrada en ld
  pinMode(ld, OUTPUT);
  Serial.begin(9600);
}
//funcion principal de entrada
void loop()
{
//declaramos la variable result para poder leer los valores de entrada del modulo de gas mq2
 result=analogRead(sensor_gas);
 //la variable result como decimales 
 Serial.println(result, DEC);
//if para comparar lo leido de la variables result y poder saber la existencia de humo 
  if(result>300){
    //establecemos el valor HIGH en ld
    digitalWrite(ld,HIGH); 
    //retardo de 10ms
    delay(10);  
    //establecemos el valor HIGH en E1 
     digitalWrite(E1, HIGH);   
      //establecemos el valor HIGH en I1 
        digitalWrite(I1, HIGH); 
        //retardo de ms
        delay(3000);
      
    
  }
  //si no se lee lecturas de humo se hara esto
  else {
    //establecemos el valor LOW en ld
    digitalWrite(ld,LOW);
    //retardo de 10ms
     delay(10); 
    //establecemos el valor lOW en E1  
      digitalWrite(E1, LOW);  
      //establecemos el valor LOW en I1 
        digitalWrite(I1, LOW);  
         //retardo de 10ms
        delay(10);
    }
}