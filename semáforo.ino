// Definição dos pinos
int vermelho = 13;
int amarelo = 12;
int verde = 11;

void setup() {
  // Configura os pinos como saída
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  // 1. Vermelho aceso (PARE) por 5 segundos
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  delay(5000); 

  // 2. Verde aceso (SIGA) por 5 segundos
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);
  delay(5000);

  // 3. Amarelo aceso (ATENÇÃO) por 2 segundos
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(2000);
}
