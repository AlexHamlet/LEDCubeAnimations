const int l0 = 3;
const int l1 = 4;
const int l2 = 5;
const int l3 = 6;

const int x0y0 = A4;
const int x0y1 = A3;
const int x0y2 = A2;
const int x0y3 = A1;

const int x1y0 = A5;
const int x1y1 = A0;
const int x1y2 = 8;
const int x1y3 = 9;

const int x2y0 = 1;
const int x2y1 = 7;
const int x2y2 = 10;
const int x2y3 = 11;

const int x3y0 = 0;
const int x3y1 = 2;
const int x3y2 = 12;
const int x3y3 = 13;

const int col0[] = {x0y0, x0y1, x0y2, x0y3};
const int col1[] = {x1y0, x1y1, x1y2, x1y3};
const int col2[] = {x2y0, x2y1, x2y2, x2y3};
const int col3[] = {x3y0, x3y1, x3y2, x3y3};
const int led[4][4] = {{x0y0, x0y1, x0y2, x0y3}, {x1y0, x1y1, x1y2, x1y3}, {x2y0, x2y1, x2y2, x2y3}, {x3y0, x3y1, x3y2, x3y3}};
const int layer[] = {l0, l1, l2, l3};

const int animationtime = 70;
const int dimension = 4;
int change;

int seaweed[dimension * dimension][dimension];

void setup() {

  for (int p = 0; p < dimension * dimension; p++) {
    seaweed[p][0] = led[p / 4][p % 4];
    seaweed[p][1] = -1;
  }

  for (int p = 0; p < dimension; p++) {
    for (int s = 0; s < dimension; s++) {
      pinMode(led[p][s], OUTPUT);
    }
  }

  for (int p = 0; p < dimension; p++) {
    pinMode(layer[p], OUTPUT);
  }

}

void loop() {
  clear();
  seaWeed();
  for (int s = 0; s < animationtime; s++) {
    for (int currentLayer = 0; currentLayer < 4; currentLayer++) {
      digitalWrite(layer[currentLayer], HIGH);
      if (currentLayer == 0) {
        for (int p = 0; p < dimension * dimension; p++) {
          if (seaweed[p][1] >= 0) {
            digitalWrite(seaweed[p][0], HIGH);
          }
        }
      }
      if (currentLayer == 1) {
        for (int p = 0; p < dimension * dimension; p++) {
          if (seaweed[p][1] >= 1) {
            digitalWrite(seaweed[p][0], HIGH);
          }
        }
      }
      if (currentLayer == 2) {
        for (int p = 0; p < dimension * dimension; p++) {
          if (seaweed[p][1] >= 2) {
            digitalWrite(seaweed[p][0], HIGH);
          }
        }
      }
      if (currentLayer == 3) {
        for (int p = 0; p < dimension * dimension; p++) {
          if (seaweed[p][1] >= 3) {
            digitalWrite(seaweed[p][0], HIGH);
          }
        }
      }
      delay(1);
      clear();
    }
  }
}

void clear() {
  for (int p = 0; p < dimension; p++) {
    for (int s = 0; s < dimension; s++) {
      digitalWrite(led[p][s], LOW);
    }
  }
  for (int p = 0; p < dimension; p++) {
    digitalWrite(layer[p], LOW);
  }
}

void seaWeed(){
  for(int p = 0; p < dimension * dimension;p++){
    change = rand() % 3;
    if(change == 0 && seaweed[p][1] > -1){
      seaweed[p][1]--; 
    }else if(change == 2 && seaweed[p][1] < 3){
      seaweed[p][1]++; 
    }
    
  }
}

