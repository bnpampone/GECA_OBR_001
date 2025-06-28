// Variável auxiliar de velocidade (entre 0 e 255)
int velocidade = 150;

// Motor A
int IN1 = 4;
int IN2 = 5;
int velocidadeA = 3;

// Motor B
int IN3 = 6;
int IN4 = 7;
int velocidadeB = 5;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(velocidadeA, OUTPUT);
  pinMode(velocidadeB, OUTPUT);
}

void loop() {
  // Motor A gira no sentido horário
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(velocidadeA, velocidade); // Ativa com velocidade definida

  // Motor B parado
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(velocidadeB, 0);
  delay(2000);

  // Para motor A
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(velocidadeA, 0);

  // Motor B gira no sentido horário
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(velocidadeB, velocidade);
  delay(2000);
}
