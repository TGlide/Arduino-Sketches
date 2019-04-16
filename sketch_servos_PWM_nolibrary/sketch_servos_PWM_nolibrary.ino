int servoTable[] = {                   // Delays de pulso indicando posições
  0b1001011000,
  0b10001111110,
  0b11011010110,
  0b100101100000
};

int inc = 1;                            // Incremento ao indice
int idx = 0;                            // Indice da posição atual
int totalPos = 4;                       // Total de posições usadas

int servoPin = 9;                       // Pin do servo
int pulseInterval=20;                   // Intervalo entre pulsos
int waitCount=0;                        // Contador de loops esperados
int waitTimes=50;                       // Vezes que o loop vai rodar antes da proxima posição

void setup() {
  Serial.begin(9600);                   // Abre porta serial, seta taxa de dados para 9600 bps
  pinMode(servoPin, OUTPUT);            // Configura servo para OUTPUT
}

void loop() {
  waitCount++;                          // Incrementa o contador de espera
  if (waitCount == waitTimes) {         // Verifica se espera foi concluida  
    waitCount = 0;          
    idx += inc;                         // Aumenta o indice da posição

    if (idx == 3) inc = -1;             // Faz a volta do motor caso tenha chegado ao fim
    else if (idx <= 0) inc = 1;         // Faz a ida do motor caso a volta tenha sido concluida
  }

  digitalWrite(servoPin, HIGH);         // Disponibiliza o servo para leitura
  delayMicroseconds(servoTable[idx]);   // Delay responsável por ditar a posição do servos
  digitalWrite(servoPin, LOW);          // Conclui a leitura de posição
  delay(pulseInterval);                 // Delay de pulso do servos
  
  }
