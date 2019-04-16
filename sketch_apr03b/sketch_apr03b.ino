//Exemplo 1 -Usando potenciometro para fazer leituras analógicas
// Apostila Eletrogate -KIT BEGINNING
#define sensorPin1 A0                                // define entrada analógica A0
#define sensorPin2 A1                               // define entrada analógica A1

int sensorValue1=0;                                 // variável inteiro igual a zero
int sensorValue2=0;                                 
float voltage1;                                     // variável numero fracionario
float voltage2;

void setup()
{
  Serial.begin(9600);                               // monitor serial -velocidade 9600 Bps
  delay(100);                                       // atraso de 100 milisegundos
}

void loop(){
  sensorValue1=analogRead(sensorPin1);               // leitura da entrada analógica A0
  sensorValue2=analogRead(sensorPin2);               // leitura da entrada analógica A1
  voltage1=sensorValue1*(5.0/1024);                   // cálculo da tensão 1
  voltage2=sensorValue1*(5.0/1024);                   // cálculo da tensão 2
  Serial.print("Tensão do divisor 1: ");        // imprime no monitor serial
  Serial.print(voltage1);                            // imprime a tensão 
  Serial.print(" Tensão do divisor 2: ");        // imprime no monitor serial
  Serial.println(voltage2);                            // imprime a tensão 
  delay(500);                                       // atraso de 500 milisegundos}
}
