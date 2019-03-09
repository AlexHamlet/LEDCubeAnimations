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
//int led[] = {col0, col1, col2, col3};
int led[4][4] = {{x0y0, x0y1, x0y2, x0y3}, {x1y0, x1y1, x1y2, x1y3}, {x2y0, x2y1, x2y2, x2y3}, {x3y0, x3y1, x3y2, x3y3}};
//int led[4][4] = {{col0}, {col1}, {col2}, {col3}};
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
  clear();
  inorder();
  all();
  fronttoback();
  lefttoright();
  backtofront();
  righttoleft();
  bottomtotop();
  toptobottom();
  diagonal();
  diagonalbackwardsfill();
  diagonalbackwards();
  diagonalfill();
  povtest();
  dnaplay();
  strikedance();
  extradiagonal();
  waves();
  outoforder();
  middlefollow();
  //pulse();
  tornado();
  laser();
  lazysusan();
  spincube();
  doublecube();
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

void alllayers() {
  for (int p = 0; p < layers; p++) {
    digitalWrite(layer[p], HIGH);
  }
}

void allcolumns() {
  for (int p = 0; p < rows; p++) {
    for (int s = 0; s < columns; s++) {
      digitalWrite(led[p][s], HIGH);
    }
  }
}

void inorder() {
  clear();
  for (int p = 0; p < layers; p++) {
    digitalWrite(layer[p], HIGH);
    for (int s = 0; s < rows; s++) {
      for (int t = 0; t < columns; t++) {
        digitalWrite(led[s][t], HIGH);
        delay(timedelay);
      }
    }
    clear();
  }
}

void all() {
  for (int p = 0; p < animationtime; p++) {
    for (int s = 0; s < layers; s++) {
      digitalWrite(layer[s], HIGH);
      allcolumns();
      delay(1);
    }
    clear();
  }
}

void fronttoback() {
  clear();
  for (int p = 0; p < 4; p++) {
    alllayers();
    for (int s = 0; s < 4; s++) {
      digitalWrite(led[s][p], HIGH);
    }
    delay(timedelay);
    clear();
  }
}

void backtofront() {
  clear();
  for (int p = 3; p > -1; p--) {
    alllayers();
    for (int s = 0; s < 4; s++) {
      digitalWrite(led[s][p], HIGH);
    }
    delay(timedelay);
    clear();
  }
}

void righttoleft() {
  clear();
  for (int p = 3; p > -1; p--) {
    alllayers();
    for (int s = 0; s < 4; s++) {
      digitalWrite(led[p][s], HIGH);
    }
    delay(timedelay);
    clear();
  }
}

void lefttoright() {
  clear();
  for (int p = 0; p < 4; p++) {
    alllayers();
    for (int s = 0; s < 4; s++) {
      digitalWrite(led[p][s], HIGH);
    }
    delay(timedelay);
    clear();
  }
}

void bottomtotop() {
  clear();
  allcolumns();
  for (int p = 0; p < 4; p++) {
    digitalWrite(layer[p], HIGH);
    delay(timedelay);
    digitalWrite(layer[p], LOW);
  }
}

void toptobottom() {
  clear();
  allcolumns();
  for (int p = 3; p > -1; p--) {
    digitalWrite(layer[p], HIGH);
    delay(timedelay);
    digitalWrite(layer[p], LOW);
  }
}

void diagonal() {
  clear();
  alllayers();
  for (int p = 0; p < 7; p++) {
    if (p % 2 == 0) {
      digitalWrite(led[p / 2][p / 2], HIGH);
    }
    if (p < 4) {
      digitalWrite(led[0][p], HIGH);
      digitalWrite(led[p][0], HIGH);
    }
    if (p > 2 && p < 6) {
      if (p % 2 == 0) {
        digitalWrite(led[p / 2 + 1][p / 2 - 1], HIGH);
        digitalWrite(led[p / 2 - 1][p / 2 + 1], HIGH);
      } else {
        digitalWrite(led[(p - 1) / 2][(p + 1) / 2], HIGH);
        digitalWrite(led[(p + 1) / 2][(p - 1) / 2], HIGH);
      }
    }
    delay(timedelay);
    clear();
    alllayers();
  }
}

void diagonalbackwards() {
  clear();
  alllayers();
  for (int p = 6; p > -1; p--) {
    if (p % 2 == 0) {
      digitalWrite(led[p / 2][p / 2], HIGH);
    }
    if (p < 4) {
      digitalWrite(led[0][p], HIGH);
      digitalWrite(led[p][0], HIGH);
    }
    if (p > 2 && p < 6) {
      if (p % 2 == 0) {
        digitalWrite(led[p / 2 + 1][p / 2 - 1], HIGH);
        digitalWrite(led[p / 2 - 1][p / 2 + 1], HIGH);
      } else {
        digitalWrite(led[(p - 1) / 2][(p + 1) / 2], HIGH);
        digitalWrite(led[(p + 1) / 2][(p - 1) / 2], HIGH);
      }
    }
    delay(timedelay);
    clear();
    alllayers();
  }
}

void diagonalfill() {
  clear();
  alllayers();
  for (int p = 0; p < 7; p++) {
    if (p % 2 == 0) {
      digitalWrite(led[p / 2][p / 2], HIGH);
    }
    if (p < 4) {
      digitalWrite(led[0][p], HIGH);
      digitalWrite(led[p][0], HIGH);
    }
    if (p > 2 && p < 6) {
      if (p % 2 == 0) {
        digitalWrite(led[p / 2 + 1][p / 2 - 1], HIGH);
        digitalWrite(led[p / 2 - 1][p / 2 + 1], HIGH);
      } else {
        digitalWrite(led[(p - 1) / 2][(p + 1) / 2], HIGH);
        digitalWrite(led[(p + 1) / 2][(p - 1) / 2], HIGH);
      }
    }
    delay(timedelay);
  }
  for (int p = 6; p > -1; p--) {
    if (p % 2 == 0) {
      digitalWrite(led[p / 2][p / 2], LOW);
    }
    if (p < 4) {
      digitalWrite(led[0][p], LOW);
      digitalWrite(led[p][0], LOW);
    }
    if (p > 2 && p < 6) {
      if (p % 2 == 0) {
        digitalWrite(led[p / 2 + 1][p / 2 - 1], LOW);
        digitalWrite(led[p / 2 - 1][p / 2 + 1], LOW);
      } else {
        digitalWrite(led[(p - 1) / 2][(p + 1) / 2], LOW);
        digitalWrite(led[(p + 1) / 2][(p - 1) / 2], LOW);
      }
    }
    delay(timedelay);
  }
}

void diagonalbackwardsfill() {
  clear();
  alllayers();
  for (int p = 6; p > -1; p--) {
    if (p % 2 == 0) {
      digitalWrite(led[p / 2][p / 2], HIGH);
    }
    if (p < 4) {
      digitalWrite(led[0][p], HIGH);
      digitalWrite(led[p][0], HIGH);
    }
    if (p > 2 && p < 6) {
      if (p % 2 == 0) {
        digitalWrite(led[p / 2 + 1][p / 2 - 1], HIGH);
        digitalWrite(led[p / 2 - 1][p / 2 + 1], HIGH);
      } else {
        digitalWrite(led[(p - 1) / 2][(p + 1) / 2], HIGH);
        digitalWrite(led[(p + 1) / 2][(p - 1) / 2], HIGH);
      }
    }
    delay(timedelay);
  }
  for (int p = 0; p < 7; p++) {
    if (p % 2 == 0) {
      digitalWrite(led[p / 2][p / 2], LOW);
    }
    if (p < 4) {
      digitalWrite(led[0][p], LOW);
      digitalWrite(led[p][0], LOW);
    }
    if (p > 2 && p < 6) {
      if (p % 2 == 0) {
        digitalWrite(led[p / 2 + 1][p / 2 - 1], LOW);
        digitalWrite(led[p / 2 - 1][p / 2 + 1], LOW);
      } else {
        digitalWrite(led[(p - 1) / 2][(p + 1) / 2], LOW);
        digitalWrite(led[(p + 1) / 2][(p - 1) / 2], LOW);
      }
    }
    delay(timedelay);
  }
}

void povtest() {
  for (int times = 0; times < 4; times++) {
    clear();
    for (int p = 0; p < 4; p++) {
      for (int d = 0; d < 100; d++) {
        for (int s = 0; s < 4; s++) {
          digitalWrite(layer[s], HIGH);
          digitalWrite(led[0][((s + p) % 4)], HIGH);
          digitalWrite(led[3][3 - ((s + p) % 4)], HIGH);
          digitalWrite(led[3 - ((s + p) % 4)][0], HIGH);
          digitalWrite(led[((s + p) % 4)][3], HIGH);
          delay(1);
          clear();
        }
      }
    }
  }
}

void dnaplay() {
  for (int times = 0; times < 4; times++) {
    clear();
    for (int p = 0; p < columns; p++) {
      for (int s = 0; s < animationtime; s++) {
        for (int t = 0; t < layers; t++) {
          digitalWrite(layer[t], HIGH);
          digitalWrite(led[((t + p) % 4)][0], HIGH);
          digitalWrite(led[3 - ((t + p) % 4)][0], HIGH);
          digitalWrite(led[3 - ((t + p) % 4)][3], HIGH);
          digitalWrite(led[((t + p) % 4)][3], HIGH);
          digitalWrite(led[0][3 - ((t + p) % 4)], HIGH);
          digitalWrite(led[0][((t + p) % 4)], HIGH);
          digitalWrite(led[3][((t + p) % 4)], HIGH);
          digitalWrite(led[3][3 - ((t + p) % 4)], HIGH);
          delay(1);
          clear();
        }
      }
    }
  }
}

void strikedance() {
  clear();
  for (int p = 0; p < rows; p++) {
    for (int s = 0; s < animationtime; s++) {
      for (int t = 0; t < layers; t++) {
        digitalWrite(layer[t], HIGH);
        digitalWrite(led[t][p], HIGH);
        digitalWrite(led[3 - t][p], HIGH);
        delay(1);
        clear();
      }
    }
  }
  for (int s = 0; s < animationtime; s++) {
    for (int t = 0; t < rows; t++) {
      digitalWrite(layer[t], HIGH);
      digitalWrite(led[t][t], HIGH);
      digitalWrite(led[3 - t][t], HIGH);
      delay(1);
      clear();
    }
  }
  for (int s = 0; s < animationtime; s++) {
    for (int t = 0; t < rows; t++) {
      digitalWrite(layer[t], HIGH);
      digitalWrite(led[t][t], HIGH);
      digitalWrite(led[t][3 - t], HIGH);
      delay(1);
      clear();
    }
  }
  for (int s = 0; s < animationtime; s++) {
    for (int t = 0; t < rows; t++) {
      digitalWrite(layer[t], HIGH);
      digitalWrite(led[3 - t][3 - t], HIGH);
      digitalWrite(led[t][3 - t], HIGH);
      delay(1);
      clear();
    }
  }
  for (int s = 0; s < animationtime; s++) {
    for (int t = 0; t < rows; t++) {
      digitalWrite(layer[t], HIGH);
      digitalWrite(led[3 - t][3 - t], HIGH);
      digitalWrite(led[3 - t][t], HIGH);
      delay(1);
      clear();
    }
  }
}

void extradiagonal() {
  clear();
  for (int go = 0; go < 5; go++) {
    for (int p = 0; p < rows; p++) {
      for (int s = 0; s < animationtime; s++) {
        for (int t = 0; t < layers; t++) {
          digitalWrite(layer[t], HIGH);
          for (int f = 0; f < columns; f++) {
            digitalWrite(led[f][((t + p + f) % 4)], HIGH);
          }
          delay(1);
          clear();
        }
      }
    }
  }
}

void waves() {
  clear();
  for (int go = 0; go < 5; go++) {
    for (int p = 0; p < rows; p++) {
      for (int s = 0; s < animationtime; s++) {
        for (int t = 0; t < layers; t++) {
          digitalWrite(layer[t], HIGH);
          for (int f = 0; f < columns; f++) {
            digitalWrite(led[f][((t + p) % 4)], HIGH);
          }
          delay(1);
          clear();
        }
      }
    }
  }
}

void outoforder() {
  clear();
  allcolumns();
  digitalWrite(layer[0], HIGH);
  delay(timedelay);
  digitalWrite(layer[0], LOW);
  digitalWrite(layer[2], HIGH);
  delay(timedelay);
  digitalWrite(layer[2], LOW);
  digitalWrite(layer[1], HIGH);
  delay(timedelay);
  digitalWrite(layer[1], LOW);
  digitalWrite(layer[3], HIGH);
  delay(timedelay);
  digitalWrite(layer[3], LOW);
}

void middlefollow() {
  clear();
  for (int p = 0; p < layers; p++) {
    for (int s = 0; s < animationtime; s++) {
      digitalWrite(layer[p], HIGH);
      digitalWrite(led[0][0], HIGH);
      digitalWrite(led[0][1], HIGH);
      digitalWrite(led[0][2], HIGH);
      digitalWrite(led[0][3], HIGH);
      digitalWrite(led[3][0], HIGH);
      digitalWrite(led[3][1], HIGH);
      digitalWrite(led[3][2], HIGH);
      digitalWrite(led[3][3], HIGH);
      digitalWrite(led[1][0], HIGH);
      digitalWrite(led[1][3], HIGH);
      digitalWrite(led[2][0], HIGH);
      digitalWrite(led[2][3], HIGH);
      delay(1);
      clear();
      digitalWrite(layer[layers - 1 - p], HIGH);
      digitalWrite(led[1][1], HIGH);
      digitalWrite(led[1][2], HIGH);
      digitalWrite(led[2][1], HIGH);
      digitalWrite(led[2][2], HIGH);
      delay(1);
      clear();
    }
  }
  clear();
  for (int p = 0; p < layers; p++) {
    for (int s = 0; s < animationtime; s++) {
      digitalWrite(layer[layers - 1 - p], HIGH);
      digitalWrite(led[0][0], HIGH);
      digitalWrite(led[0][1], HIGH);
      digitalWrite(led[0][2], HIGH);
      digitalWrite(led[0][3], HIGH);
      digitalWrite(led[3][0], HIGH);
      digitalWrite(led[3][1], HIGH);
      digitalWrite(led[3][2], HIGH);
      digitalWrite(led[3][3], HIGH);
      digitalWrite(led[1][0], HIGH);
      digitalWrite(led[1][3], HIGH);
      digitalWrite(led[2][0], HIGH);
      digitalWrite(led[2][3], HIGH);
      delay(1);
      clear();
      digitalWrite(layer[p], HIGH);
      digitalWrite(led[1][1], HIGH);
      digitalWrite(led[1][2], HIGH);
      digitalWrite(led[2][1], HIGH);
      digitalWrite(led[2][2], HIGH);
      delay(1);
      clear();
    }
  }
}

void pulse() {
  clear();
  for (int p = 0; p < 6; p++) {
    for ( int s = 0; s < animationtime; s++) {
      for (int t = 0; t < layers; t++) {
        allcolumns();
        digitalWrite(layer[t], HIGH);
        clear();
        delay(p);
      }
    }
  }
}

void tornado() {
  clear();
  alllayers();
  for (int p = 0; p < 4; p++) {
    for (int s = 1; s < 4; s++) {
      digitalWrite(led[0][s], HIGH);
      digitalWrite(led[3 - s][0], HIGH);
      digitalWrite(led[3][3 - s], HIGH);
      digitalWrite(led[s][3], HIGH);
      delay(timedelay);
      clear();
      alllayers();
    }
  }
}

void laser() {
  for (int p = 0; p < 4; p++) {
    for (int s = 0; s < animationtime; s++) {
      for (int t = 0; t < 4; t++) {
        digitalWrite(layer[t], HIGH);
        if (t == 0) {
          digitalWrite(led[0][0], HIGH);
          digitalWrite(led[0][1], HIGH);
          digitalWrite(led[0][2], HIGH);
          digitalWrite(led[0][3], HIGH);
          digitalWrite(led[2][0], HIGH);
          digitalWrite(led[2][1], HIGH);
          digitalWrite(led[2][2], HIGH);
          digitalWrite(led[2][3], HIGH);
        }
        if (t == 1) {
          digitalWrite(led[0][0], HIGH);
          digitalWrite(led[0][3], HIGH);
          digitalWrite(led[1][1], HIGH);
          digitalWrite(led[1][2], HIGH);
          digitalWrite(led[2][0], HIGH);
          digitalWrite(led[2][3], HIGH);
          digitalWrite(led[3][1], HIGH);
          digitalWrite(led[3][2], HIGH);
        }
        if (t == 2) {
          digitalWrite(led[0][0], HIGH);
          digitalWrite(led[0][3], HIGH);
          digitalWrite(led[1][1], HIGH);
          digitalWrite(led[1][2], HIGH);
          digitalWrite(led[2][0], HIGH);
          digitalWrite(led[2][3], HIGH);
          digitalWrite(led[3][1], HIGH);
          digitalWrite(led[3][2], HIGH);
        }
        if (t == 3) {
          digitalWrite(led[0][0], HIGH);
          digitalWrite(led[0][1], HIGH);
          digitalWrite(led[0][2], HIGH);
          digitalWrite(led[0][3], HIGH);
          digitalWrite(led[2][0], HIGH);
          digitalWrite(led[2][1], HIGH);
          digitalWrite(led[2][2], HIGH);
          digitalWrite(led[2][3], HIGH);
        }
        delay(1);
        clear();
      }
    }
    for (int s = 0; s < animationtime; s++) {
      for (int t = 0; t < 4; t++) {
        digitalWrite(layer[t], HIGH);
        if (t == 0) {
          digitalWrite(led[1][0], HIGH);
          digitalWrite(led[1][1], HIGH);
          digitalWrite(led[1][2], HIGH);
          digitalWrite(led[1][3], HIGH);
          digitalWrite(led[3][0], HIGH);
          digitalWrite(led[3][1], HIGH);
          digitalWrite(led[3][2], HIGH);
          digitalWrite(led[3][3], HIGH);
        }
        if (t == 1) {
          digitalWrite(led[1][0], HIGH);
          digitalWrite(led[1][3], HIGH);
          digitalWrite(led[2][1], HIGH);
          digitalWrite(led[2][2], HIGH);
          digitalWrite(led[3][0], HIGH);
          digitalWrite(led[3][3], HIGH);
          digitalWrite(led[0][1], HIGH);
          digitalWrite(led[0][2], HIGH);
        }
        if (t == 2) {
          digitalWrite(led[1][0], HIGH);
          digitalWrite(led[1][3], HIGH);
          digitalWrite(led[2][1], HIGH);
          digitalWrite(led[2][2], HIGH);
          digitalWrite(led[3][0], HIGH);
          digitalWrite(led[3][3], HIGH);
          digitalWrite(led[0][1], HIGH);
          digitalWrite(led[0][2], HIGH);
        }
        if (t == 3) {
          digitalWrite(led[1][0], HIGH);
          digitalWrite(led[1][1], HIGH);
          digitalWrite(led[1][2], HIGH);
          digitalWrite(led[1][3], HIGH);
          digitalWrite(led[3][0], HIGH);
          digitalWrite(led[3][1], HIGH);
          digitalWrite(led[3][2], HIGH);
          digitalWrite(led[3][3], HIGH);
        }
        delay(1);
        clear();
      }
    }
  }
}

void lazysusan() {
  for (int times = 0; times < 4; times++) {
    for (int p = 0; p < 6; p++) {
      clear();
      alllayers();
      if (p == 0) {
        digitalWrite(led[0][0], HIGH);
        digitalWrite(led[1][1], HIGH);
        digitalWrite(led[2][2], HIGH);
        digitalWrite(led[3][3], HIGH);
      }
      if (p == 1) {
        digitalWrite(led[0][1], HIGH);
        digitalWrite(led[1][1], HIGH);
        digitalWrite(led[2][2], HIGH);
        digitalWrite(led[3][2], HIGH);
      }
      if (p == 2) {
        digitalWrite(led[0][2], HIGH);
        digitalWrite(led[1][2], HIGH);
        digitalWrite(led[2][1], HIGH);
        digitalWrite(led[3][1], HIGH);
      }
      if (p == 3) {
        digitalWrite(led[0][3], HIGH);
        digitalWrite(led[1][2], HIGH);
        digitalWrite(led[2][1], HIGH);
        digitalWrite(led[3][0], HIGH);
      }
      if (p == 4) {
        digitalWrite(led[1][3], HIGH);
        digitalWrite(led[1][2], HIGH);
        digitalWrite(led[2][1], HIGH);
        digitalWrite(led[2][0], HIGH);
      }
      if (p == 5) {
        digitalWrite(led[1][0], HIGH);
        digitalWrite(led[1][1], HIGH);
        digitalWrite(led[2][2], HIGH);
        digitalWrite(led[2][3], HIGH);
      }
      delay(timedelay);
    }
  }
}

void spincube() {
  for (int times = 0; times < 6; times++) {
    for (int p = 0; p < 6; p++) {
      for (int s = 0; s < animationtime; s++) {
        for (int t = 0; t < 4; t++) {
          clear();
          digitalWrite(layer[t], HIGH);
          if (t == 0) {
            if (p == 0) {
              digitalWrite(led[0][0], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[3][3], HIGH);
            }
            if (p == 1) {
              digitalWrite(led[0][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[2][3], HIGH);
            }
            if (p == 2) {
              digitalWrite(led[0][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 3) {
              digitalWrite(led[3][0], HIGH);
              digitalWrite(led[0][3], HIGH);
            }
            if (p == 4) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[3][1], HIGH);
            }
            if (p == 5) {
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[3][2], HIGH);
            }
          }
          if (t == 1) {
            if (p == 0) {
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[2][3], HIGH);
            }
            if (p == 1) {
              digitalWrite(led[0][0], HIGH);
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[2][3], HIGH);
            }
            if (p == 2) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[3][0], HIGH);
              digitalWrite(led[0][1], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 3) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[3][1], HIGH);
              digitalWrite(led[0][2], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 4) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[3][2], HIGH);
              digitalWrite(led[0][3], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 5) {
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[2][3], HIGH);
              digitalWrite(led[3][3], HIGH);
            }
          }
          if (t == 2) {
            if (p == 0) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 1) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[3][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 2) {
              digitalWrite(led[0][0], HIGH);
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[3][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[2][3], HIGH);
            }
            if (p == 3) {
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[0][1], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[3][2], HIGH);
              digitalWrite(led[2][3], HIGH);
            }
            if (p == 4) {
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[0][2], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[2][3], HIGH);
              digitalWrite(led[3][3], HIGH);
            }
            if (p == 5) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[0][3], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
          }
          if (t == 3) {
            if (p == 0) {
              digitalWrite(led[3][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[0][3], HIGH);
            }
            if (p == 1) {
              digitalWrite(led[3][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 2) {
              digitalWrite(led[3][2], HIGH);
              digitalWrite(led[2][3], HIGH);
            }
            if (p == 3) {
              digitalWrite(led[0][0], HIGH);
              digitalWrite(led[3][3], HIGH);
            }
            if (p == 4) {
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[0][1], HIGH);
            }
            if (p == 5) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[0][2], HIGH);
            }
          }
          delay(1);
        }
      }
    }
  }
}

void doublecube() {
  for (int times = 0; times < 4; times++) {
    clear();
    for (int p = 0; p < 8; p++) {
      for (int s = 0; s < animationtime; s++) {
        for (int t = 0; t < 4 ; t++) {
          digitalWrite(layer[t], HIGH);
          if (t == 0 || t == 1) {
            if (p == 0 || p == 4) {
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[2][2], HIGH);
            }
            if (p == 1) {
              digitalWrite(led[0][0], HIGH);
              digitalWrite(led[0][1], HIGH);
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[1][1], HIGH);
            }
            if (p == 2) {
              digitalWrite(led[0][1], HIGH);
              digitalWrite(led[0][2], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[1][2], HIGH);
            }
            if (p == 3) {
              digitalWrite(led[0][2], HIGH);
              digitalWrite(led[0][3], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 5) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[3][0], HIGH);
              digitalWrite(led[3][1], HIGH);
            }
            if (p == 6) {
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[3][2], HIGH);
              digitalWrite(led[3][1], HIGH);
            }
            if (p == 7) {
              digitalWrite(led[2][3], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[3][2], HIGH);
              digitalWrite(led[3][3], HIGH);
            }
          }
          if (t == 2 || t == 3) {
            if (p == 0 || p == 4) {
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[2][2], HIGH);
            }
            if (p == 1) {
              digitalWrite(led[2][3], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[3][2], HIGH);
              digitalWrite(led[3][3], HIGH);
            }
            if (p == 2) {
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[2][2], HIGH);
              digitalWrite(led[3][2], HIGH);
              digitalWrite(led[3][1], HIGH);
            }
            if (p == 3) {
              digitalWrite(led[2][0], HIGH);
              digitalWrite(led[2][1], HIGH);
              digitalWrite(led[3][0], HIGH);
              digitalWrite(led[3][1], HIGH);
            }
            if (p == 5) {
              digitalWrite(led[0][2], HIGH);
              digitalWrite(led[0][3], HIGH);
              digitalWrite(led[1][2], HIGH);
              digitalWrite(led[1][3], HIGH);
            }
            if (p == 6) {
              digitalWrite(led[0][1], HIGH);
              digitalWrite(led[0][2], HIGH);
              digitalWrite(led[1][1], HIGH);
              digitalWrite(led[1][2], HIGH);
            }
            if (p == 7) {
              digitalWrite(led[0][0], HIGH);
              digitalWrite(led[0][1], HIGH);
              digitalWrite(led[1][0], HIGH);
              digitalWrite(led[1][1], HIGH);
            }
          }
          delay(1);
          clear();
        }
      }
    }
  }
}

