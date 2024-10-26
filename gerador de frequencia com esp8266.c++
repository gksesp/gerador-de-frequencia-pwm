// Frequência desejada em Hz
int frequencia = 1000; // Altere o valor para a frequência desejada, até 1 kHz

// Pino onde a frequência será gerada
int pinoPWM = D1; // Utilize um pino digital disponível no seu ESP8266

void setup() {
  // Inicializa o pino como saída
  pinMode(pinoPWM, OUTPUT);

  // Configura o PWM com duty cycle e frequência
  int dutyCycle = 512; // Duty cycle de 50% (valor máximo para ESP8266 é 1023)
  analogWriteFreq(frequencia); // Configura a frequência do PWM
  analogWrite(pinoPWM, dutyCycle); // Configura o duty cycle e ativa o PWM
}

void loop() {
  // O PWM está gerando a frequência automaticamente
  // Não é necessário adicionar código no loop
}
