int l0 = 3;
int l1 = 4;
int l2 = 5;
int l3 = 6;

int x0y0 = A4;
int x0y1 = A3;
int x0y2 = A2;
int x0y3 = A1;

int x1y0 = A5;
int x1y1 = A0;
int x1y2 = 8;
int x1y3 = 9;

int x2y0 = 1;
int x2y1 = 7;
int x2y2 = 10;
int x2y3 = 11;

int x3y0 = 0;
int x3y1 = 2;
int x3y2 = 12;
int x3y3 = 13;

int col0[] = {x0y0, x0y1, x0y2, x0y3};
int col1[] = {x1y0, x1y1, x1y2, x1y3};
int col2[] = {x2y0, x2y1, x2y2, x2y3};
int col3[] = {x3y0, x3y1, x3y2, x3y3};
int led[4][4] = {{x0y0, x0y1, x0y2, x0y3}, {x1y0, x1y1, x1y2, x1y3}, {x2y0, x2y1, x2y2, x2y3}, {x3y0, x3y1, x3y2, x3y3}};
int layer[] = {l0, l1, l2, l3};

int timedelay = 200;
int animationtime = 50;
int rows = 4;
int columns = 4;
int layers = 4;

void setup() {

  pinMode(l0, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);

  pinMode(x0y0, OUTPUT);
  pinMode(x0y1, OUTPUT);
  pinMode(x0y2, OUTPUT);
  pinMode(x0y3, OUTPUT);

  pinMode(x1y0, OUTPUT);
  pinMode(x1y1, OUTPUT);
  pinMode(x1y2, OUTPUT);
  pinMode(x1y3, OUTPUT);

  pinMode(x2y0, OUTPUT);
  pinMode(x2y1, OUTPUT);
  pinMode(x2y2, OUTPUT);
  pinMode(x2y3, OUTPUT);

  pinMode(x3y0, OUTPUT);
  pinMode(x3y1, OUTPUT);
  pinMode(x3y2, OUTPUT);
  pinMode(x3y3, OUTPUT);
}


void loop() {
  random100();
}

void clear() {
  for (int p = 0; p < rows; p++) {
    for (int s = 0; s < columns; s++) {
      digitalWrite(led[p][s], LOW);
    }
  }
  for (int p = 0; p < layers; p++) {
    digitalWrite(layer[p], LOW);
  }
}

void random100() {
  clear();
  for (int frames = 0; frames < 100; frames++) {
    for (int s = 0; s < animationtime; s++) {
      for (int currentLayer = 0; currentLayer < 4; currentLayer++) {
        digitalWrite(layer[currentLayer], HIGH);
        if (currentLayer == 0) {
          if (frames == 1) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 2) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 3) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 4) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 5) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 6) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 7) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 8) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 9) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 10) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 11) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 12) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 13) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 14) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 15) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 16) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 17) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 18) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 19) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 20) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 21) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 22) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 23) {
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 24) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 25) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 26) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 27) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 28) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 29) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 30) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 31) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 32) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 33) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 34) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 35) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 36) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 37) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 38) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 39) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 40) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 41) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 42) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 43) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
          }
          if (frames == 44) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 45) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 46) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 47) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 48) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 49) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 50) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 51) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 52) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 53) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 54) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 55) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 56) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 57) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 58) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 59) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 60) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 61) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 62) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 63) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 64) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 65) {
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 66) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 67) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 68) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 69) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 70) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 71) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 72) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 73) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 74) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 75) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 76) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 77) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 78) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 79) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 80) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 81) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 82) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 83) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 84) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 85) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 86) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 87) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 88) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 89) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 90) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 91) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 92) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 93) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 94) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 95) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 96) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 97) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 98) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 99) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
        }
        if (currentLayer == 1) {
          if (frames == 1) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 2) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 3) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 4) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 5) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 6) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 7) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 8) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 9) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 10) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 11) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 12) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 13) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 14) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 15) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 16) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 17) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 18) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 19) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 20) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 21) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 22) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 23) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 24) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 25) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 26) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 27) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 28) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 29) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 30) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 31) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 32) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 33) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 34) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 35) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 36) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 37) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 38) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 39) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 40) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 41) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 42) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 43) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 44) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 45) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
          }
          if (frames == 46) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 47) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 48) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 49) {
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 50) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 51) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 52) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 53) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 54) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 55) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 56) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 57) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 58) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 59) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 60) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 61) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 62) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 63) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 64) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 65) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 66) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 67) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 68) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 69) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 70) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 71) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 72) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 73) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 74) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 75) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 76) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 77) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 78) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 79) {
            digitalWrite(led[1][1], HIGH);
          }
          if (frames == 80) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 81) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 82) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 83) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 84) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 85) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 86) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 87) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 88) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 89) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 90) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 91) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 92) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 93) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 94) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 95) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 96) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 97) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 98) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 99) {
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
        }
        if (currentLayer == 2) {
          if (frames == 1) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 2) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 3) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 4) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 5) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 6) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 7) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 8) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 9) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 10) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 11) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
          }
          if (frames == 12) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 13) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 14) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 15) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 16) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 17) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 18) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 19) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 20) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 21) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 22) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 23) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 24) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 25) {
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 26) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 27) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 28) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 29) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 30) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 31) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 32) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 33) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 34) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 35) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 36) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 37) {
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 38) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 39) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 40) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 41) {
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 42) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 43) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 44) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 45) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 46) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 47) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 48) {
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 49) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 50) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 51) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 52) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 53) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 54) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 55) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 56) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 57) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 58) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 59) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 60) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 61) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 62) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 63) {
            digitalWrite(led[1][0], HIGH);
          }
          if (frames == 64) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 65) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 66) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 67) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 68) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 69) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 70) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 71) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 72) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 73) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 74) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 75) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 76) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 77) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 78) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 79) {
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 80) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 81) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
          }
          if (frames == 82) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 83) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 84) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 85) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 86) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][2], HIGH);
          }
          if (frames == 87) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 88) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 89) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 90) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 91) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 92) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 93) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 94) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 95) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 96) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 97) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 98) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 99) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
        }
        if (currentLayer == 3) {
          if (frames == 1) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 2) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 3) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 4) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 5) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 6) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 7) {
            digitalWrite(led[1][2], HIGH);
          }
          if (frames == 8) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
          }
          if (frames == 9) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 10) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 11) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][3], HIGH);
          }
          if (frames == 12) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 13) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 14) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 15) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 16) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 17) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 18) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 19) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 20) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 21) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 22) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 23) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 24) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 25) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 26) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 27) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 28) {
            digitalWrite(led[1][2], HIGH);
          }
          if (frames == 29) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 30) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 31) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 32) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 33) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 34) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][2], HIGH);
          }
          if (frames == 35) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 36) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 37) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 38) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
          }
          if (frames == 39) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 40) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 41) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 42) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 43) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 44) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 45) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 46) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
          }
          if (frames == 47) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 48) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 49) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 50) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 51) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 52) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 53) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 54) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 55) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 56) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 57) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 58) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 59) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 60) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 61) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 62) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 63) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 64) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 65) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 66) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 67) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 68) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 69) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 70) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 71) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
          }
          if (frames == 72) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 73) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 74) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 75) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 76) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 77) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
          }
          if (frames == 78) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 79) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
          }
          if (frames == 80) {
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 81) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 82) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 83) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 84) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 85) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 86) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 87) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 88) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 89) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 90) {
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 91) {
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 92) {
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][0], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 93) {
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
          }
          if (frames == 94) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][0], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 95) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[1][1], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[3][0], HIGH);
          }
          if (frames == 96) {
            digitalWrite(led[0][0], HIGH);
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][2], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][1], HIGH);
            digitalWrite(led[3][2], HIGH);
          }
          if (frames == 97) {
            digitalWrite(led[0][2], HIGH);
            digitalWrite(led[0][3], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 98) {
            digitalWrite(led[0][1], HIGH);
            digitalWrite(led[1][0], HIGH);
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
          if (frames == 99) {
            digitalWrite(led[1][3], HIGH);
            digitalWrite(led[2][1], HIGH);
            digitalWrite(led[2][2], HIGH);
            digitalWrite(led[2][3], HIGH);
            digitalWrite(led[3][3], HIGH);
          }
        }
        delay(1);
        clear();
      }
    }
  }
}
