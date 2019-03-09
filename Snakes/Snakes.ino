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

const int snakeLength = 6;
const int newHead = snakeLength - 2;
const int numSnakes = 2;

int snake[snakeLength][2];
int snakes[numSnakes][snakeLength][2];

void setup() {

  for (int p = 0; p < snakeLength; p++) {
    snake[p][0] = {led[0][0]};
    snake[p][1] = {0};
  }

  for (int p = 0; p < numSnakes; p++) {
    snakes[p][snakeLength][2] = {snake};
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
  SnakesGuide();
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

int getLeft(int place) {
  if (place != led[0][0] && place != led[0][1] && place != led[0][2] && place != led[0][3]) {
    //row 1
    if (place == led[1][0]) {
      return led[0][0];
    }
    if (place == led[1][1]) {
      return led[0][1];
    }
    if (place == led[1][2]) {
      return led[0][2];
    }
    if (place == led[1][3]) {
      return led[0][3];
    }
    //row 2
    if (place == led[2][0]) {
      return led[1][0];
    }
    if (place == led[2][1]) {
      return led[1][1];
    }
    if (place == led[2][2]) {
      return led[1][2];
    }
    if (place == led[2][3]) {
      return led[1][3];
    }
    //row 3
    if (place == led[3][0]) {
      return led[2][0];
    }
    if (place == led[3][1]) {
      return led[2][1];
    }
    if (place == led[3][2]) {
      return led[2][2];
    }
    if (place == led[3][3]) {
      return led[2][3];
    }
  }
  return -999;
}

int getRight(int place) {
  if (place != led[3][0] && place != led[3][1] && place != led[3][2] && place != led[3][3]) {
    //row 1
    if (place == led[0][0]) {
      return led[1][0];
    }
    if (place == led[0][1]) {
      return led[1][1];
    }
    if (place == led[0][2]) {
      return led[1][2];
    }
    if (place == led[0][3]) {
      return led[1][3];
    }
    //row 2
    if (place == led[1][0]) {
      return led[2][0];
    }
    if (place == led[1][1]) {
      return led[2][1];
    }
    if (place == led[1][2]) {
      return led[2][2];
    }
    if (place == led[1][3]) {
      return led[2][3];
    }
    //row 3
    if (place == led[2][0]) {
      return led[3][0];
    }
    if (place == led[2][1]) {
      return led[3][1];
    }
    if (place == led[2][2]) {
      return led[3][2];
    }
    if (place == led[2][3]) {
      return led[3][3];
    }
  }
  return -999;
}

int getForeward(int place) {
  if (place != led[0][3] && place != led[1][3] && place != led[2][3] && place != led[3][3]) {
    //row 1
    if (place == led[0][0]) {
      return led[0][1];
    }
    if (place == led[1][0]) {
      return led[1][1];
    }
    if (place == led[2][0]) {
      return led[2][1];
    }
    if (place == led[3][0]) {
      return led[3][1];
    }
    //row 2
    if (place == led[0][1]) {
      return led[0][2];
    }
    if (place == led[1][1]) {
      return led[1][2];
    }
    if (place == led[2][1]) {
      return led[2][2];
    }
    if (place == led[3][1]) {
      return led[3][2];
    }
    //row 3
    if (place == led[0][2]) {
      return led[0][3];
    }
    if (place == led[1][2]) {
      return led[1][3];
    }
    if (place == led[2][2]) {
      return led[2][3];
    }
    if (place == led[3][2]) {
      return led[3][3];
    }
  }
  return -999;
}

int getBack(int place) {
  if (place != led[0][0] && place != led[1][0] && place != led[2][0] && place != led[3][0]) {
    //row 1
    if (place == led[0][1]) {
      return led[0][0];
    }
    if (place == led[1][1]) {
      return led[1][0];
    }
    if (place == led[2][1]) {
      return led[2][0];
    }
    if (place == led[3][1]) {
      return led[3][0];
    }
    //row 2
    if (place == led[0][2]) {
      return led[0][1];
    }
    if (place == led[1][2]) {
      return led[1][1];
    }
    if (place == led[2][2]) {
      return led[2][1];
    }
    if (place == led[3][2]) {
      return led[3][1];
    }
    //row 3
    if (place == led[0][3]) {
      return led[0][2];
    }
    if (place == led[1][3]) {
      return led[1][2];
    }
    if (place == led[2][3]) {
      return led[2][2];
    }
    if (place == led[3][3]) {
      return led[3][2];
    }
  }
  return -999;
}

void snakesThink() {
  bool collision = false;
  int possibleCount = 0;
  int next[5][2] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
  int place[2] = {0, 0};

  for (int snakeCount = 0; snakeCount < numSnakes; snakeCount++) {
    //Adjust snakes
    for (int p = 0; p < snakeLength - 1; p++) {
      for (int s = 0; s < 2; s++) {
        snakes[snakeCount][p][s] = snakes[snakeCount][p + 1][s];
      }
    }

    //Find Snake up
    if (snakes[snakeCount][newHead][1] != 3) {
      place[0] = snakes[snakeCount][newHead][0];
      place[1] = snakes[snakeCount][newHead][1] + 1;
      collision = CheckForSnakes(place);
      if (collision == false) {
        next[possibleCount][0] = snakes[snakeCount][newHead][0];
        next[possibleCount][1] = snakes[snakeCount][newHead][1] + 1;
        possibleCount++;
      }
    }
    collision = false;

    //Find Snake Down
    if (snakes[snakeCount][newHead][1] != 0) {
      place[0] = snakes[snakeCount][newHead][0];
      place[1] = snakes[snakeCount][newHead][1] - 1;
      collision = CheckForSnakes(place);
      if (collision == false) {
        next[possibleCount][0] = snakes[snakeCount][newHead][0];
        next[possibleCount][1] = snakes[snakeCount][newHead][1] - 1;
        possibleCount++;
      }
    }
    collision = false;

    //Find snake left
    if (snakes[snakeCount][newHead][0] != led[0][0] && snakes[snakeCount][newHead][0] != led[0][1] && snakes[snakeCount][newHead][0] != led[0][2] && snakes[snakeCount][newHead][0] != led[0][3]) {
      place[0] = getLeft(snakes[snakeCount][newHead][0]);
      place[1] = snakes[snakeCount][newHead][1];
      collision = CheckForSnakes(place);
      if (collision == false) {
        next[possibleCount][0] = getLeft(snakes[snakeCount][newHead][0]);
        next[possibleCount][1] = snakes[snakeCount][newHead][1];
        possibleCount++;
      }
    }
    collision = false;

    //Find Snake Right
    if (snakes[snakeCount][newHead][0] != led[3][0] && snakes[snakeCount][newHead][0] != led[3][1] && snakes[snakeCount][newHead][0] != led[3][2] && snakes[snakeCount][newHead][0] != led[3][3]) {
      place[0] = getRight(snakes[snakeCount][newHead][0]);
      place[1] = snakes[snakeCount][newHead][1];
      collision = CheckForSnakes(place);
      if (collision == false) {
        next[possibleCount][0] = getRight(snakes[snakeCount][newHead][0]);
        next[possibleCount][1] = snakes[snakeCount][newHead][1];
        possibleCount++;
      }
    }
    collision = false;

    //Find Snake Foreward
    if (snakes[snakeCount][newHead][0] != led[0][3] && snakes[snakeCount][newHead][0] != led[1][3] && snakes[snakeCount][newHead][0] != led[2][3] && snakes[snakeCount][newHead][0] != led[3][3]) {
      place[0] = getForeward(snakes[snakeCount][newHead][0]);
      place[1] = snakes[snakeCount][newHead][1];
      collision = CheckForSnakes(place);
      if (collision == false) {
        next[possibleCount][0] = getForeward(snakes[snakeCount][newHead][0]);
        next[possibleCount][1] = snakes[snakeCount][newHead][1];
        possibleCount++;
      }
    }
    collision = false;

    //Find Snake Back
    if (snakes[snakeCount][newHead][0] != led[0][0] && snakes[snakeCount][newHead][0] != led[1][0] && snakes[snakeCount][newHead][0] != led[2][0] && snakes[snakeCount][newHead][0] != led[3][0]) {
      place[0] = getBack(snakes[snakeCount][newHead][0]);
      place[1] = snakes[snakeCount][newHead][1];
      collision = CheckForSnakes(place);
      if (collision == false) {
        next[possibleCount][0] = getBack(snakes[snakeCount][newHead][0]);
        next[possibleCount][1] = snakes[snakeCount][newHead][1];
        possibleCount++;
      }
    }
    collision = false;

    if (possibleCount != 0) {
      int selectNext = rand() % possibleCount;

      snakes[snakeCount][snakeLength - 1][0] = next[selectNext][0];
      snakes[snakeCount][snakeLength - 1][1] = next[selectNext][1];

      possibleCount = 0;
    }
  }
}

boolean CheckForSnakes(int place[2]) {
  for (int p = 0; p < numSnakes; p++) {
    for (int s = 0; s < snakeLength; s++) {
      if (place[0] == snakes[p][s][0] && place[1] == snakes[p][s][1]) {
        return true;
      }
    }
  }
  return false;
}

void SnakesGuide() {
  clear();
  snakesThink();
  for (int s = 0; s < animationtime; s++) {
    for (int currentLayer = 0; currentLayer < 4; currentLayer++) {
      digitalWrite(layer[currentLayer], HIGH);
      if (currentLayer == 0) {
        for (int p = 0; p < numSnakes; p++) {
          for (int s = 0; s < snakeLength; s++) {
            if (snakes[p][s][1] == 0) {
              digitalWrite(snakes[p][s][0], HIGH);
            }
          }
        }
      }
      if (currentLayer == 1) {
        for (int p = 0; p < numSnakes; p++) {
          for (int s = 0; s < snakeLength; s++) {
            if (snakes[p][s][1] == 1) {
              digitalWrite(snakes[p][s][0], HIGH);
            }
          }
        }
      }
      if (currentLayer == 2) {
        for (int p = 0; p < numSnakes; p++) {
          for (int s = 0; s < snakeLength; s++) {
            if (snakes[p][s][1] == 2) {
              digitalWrite(snakes[p][s][0], HIGH);
            }
          }
        }
      }
      if (currentLayer == 3) {
        for (int p = 0; p < numSnakes; p++) {
          for (int s = 0; s < snakeLength; s++) {
            if (snakes[p][s][1] == 3) {
              digitalWrite(snakes[p][s][0], HIGH);
            }
          }
        }
      }
      delay(1);
      clear();
    }
  }
}

