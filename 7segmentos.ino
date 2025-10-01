// Pines de los segmentos (cátodo común)
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 9;

int boton = 8;
int contador = 0;

const int numEstados = 16; // 0–9 + A, E, I, O, U + apagado

// Tabla de segmentos (1=encendido, 0=apagado)
byte tabla[numEstados][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}, // 9
  {1,1,1,0,1,1,1}, // A
  {1,0,0,1,1,1,1}, // E
  {0,0,0,0,1,1,0}, // I
  {1,1,1,1,1,1,0}, // O
  {0,1,1,1,1,1,0}, // U
  {0,0,0,0,0,0,0}  // Apagado
};

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
}

void loop() {
  // Mostrar símbolo actual
  mostrar(contador);

  // Leer botón
  if (digitalRead(boton) == LOW) {
    delay(200); // antirrebote
    contador++;
    if (contador >= numEstados) {
      contador = 0; // volver al inicio después del apagado
    }
    while(digitalRead(boton) == LOW); // esperar que suelte el botón
  }
}

void mostrar(int n) {
  digitalWrite(segA, tabla[n][0]);
  digitalWrite(segB, tabla[n][1]);
  digitalWrite(segC, tabla[n][2]);
  digitalWrite(segD, tabla[n][3]);
  digitalWrite(segE, tabla[n][4]);
  digitalWrite(segF, tabla[n][5]);
  digitalWrite(segG, tabla[n][6]);
}
