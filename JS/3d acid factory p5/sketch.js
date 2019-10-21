var slabs = [],
  s = 18,
  playerX = 1,
  playerY = 1,
  playerZ = 0,
  colors = [];
var img, last = {
  x: 0,
  y: 0,
  z: 0
}, h = 3;

function setup() {
  for(var i = 0; i < h; i ++){
    if(i % 3 == 0) colors.push({
      light: color(0, 128, 0, 220),
      dark: color(0, 100, 0, 220)
    });
    if(i % 3 == 1) colors.push({
      light: color(128, 0, 0, 220),
      dark: color(100, 0, 0, 220)
    });
    if(i % 3 == 2) colors.push({
      light: color(0, 0, 128, 220),
      dark: color(0, 0, 100, 220)
    });
  }
  for (var i = 0; i < s * s; i ++) {
    slabs[i] = [];
    for (var j = 0; j < s * s; j++) {
      slabs[i][j] = [];
    }
  }
  createCanvas(600, 600);
  for (var x = 1; x < s + 1; x ++) {
    for (var y = 1; y < s + 1; y ++) {
      for (var z = 0; z < h; z ++) {
        if (((z == 0) || (random() > 0.60 && z != 0)) && !((x == 1 && y == 1))) slabs[x][y][z] = true;
        else slabs[x][y][z] = false;
        if(slabs[x][y][z] && z != 0){
          last.x = x;
          last.y = y;
          last.z = z;
        }
      }
    }
  }
  slabs[1][1][0] = true;
}

function show(x, y, z) {
    fill(colors[z].light);
    rect(x, y - z * 10, 30, 30);
    fill(colors[z].dark);
    rect(x, y + 30 - z * 10, 30, 10);
    if(x == last.x * 30 && y == last.y * 30 && z == last.z){
      fill(255, 140, 0, 220);
      rect(x, y - z * 10, 30, 30);
      fill(255, 165, 0, 200);
      rect(x, y + 30 - z * 10, 30, 10);
    }
    if(playerZ == z && playerX == x / 30 && playerY == y / 30){
      fill(255, 0, 0, 220);
      rect((playerX - 1) * 30 + 37.5, (playerY - 1) * 30 + 35 - playerZ * 10, 15, 15);
      fill(139, 0, 0, 220);
      rect((playerX - 1) * 30 + 37.5, (playerY - 1) * 30 + 50 - playerZ * 10, 15, 5);
    }
}

function draw() {
  if(mouseIsPressed){
      if(!slabs[floor(mouseX / 30)][floor(mouseY / 30)][1]) slabs[floor(mouseX / 30)][floor(mouseY / 30)][1] = true;
      else slabs[floor(mouseX / 30)][floor(mouseY / 30)][2] = true;
  }
  background(0);
  stroke(0);
  for (var x = 1; x < s + 1; x ++) {
    for (var y = 1; y < s + 1; y ++) {
      for (var z = 0; z < h; z ++) {
        if (slabs[x][y][z] || (x == 0 && y == 0)) show(x * 30, y * 30, z);
      }
    }
  }
}

function keyPressed() {
  switch (keyCode) {
    case RIGHT_ARROW:
      if (playerX != s) {
        if (!(playerZ == 0 && slabs[playerX + 1][playerY][1] && slabs[playerX + 1][playerY][2])
        && !(playerZ == 2 && !slabs[playerX + 1][playerY][2] && !slabs[playerX + 1][playerY][1])
        && !(playerZ == 0 && slabs[playerX + 1][playerY][1] && slabs[playerX][playerY][2])) {
          playerX ++;
          if (slabs[playerX][playerY][playerZ + 1]) playerZ ++;
          else if (slabs[playerX][playerY][playerZ - 1] && !slabs[playerX][playerY][playerZ]) playerZ --;
        }
      }
      break;
    case LEFT_ARROW:
      if (playerX != 1) {
        if (!(playerZ == 0 && slabs[playerX - 1][playerY][1] && slabs[playerX - 1][playerY][2])
        && !(playerZ == 2 && !slabs[playerX - 1][playerY][2] && !slabs[playerX - 1][playerY][1])
        && !(playerZ == 0 && slabs[playerX - 1][playerY][1] && slabs[playerX][playerY][2])) {
          playerX --;
          if (slabs[playerX][playerY][playerZ + 1]) playerZ ++;
          else if (slabs[playerX][playerY][playerZ - 1] && !slabs[playerX][playerY][playerZ]) playerZ --;
        }
      }
      break;
    case DOWN_ARROW:
      if (playerY != s) {
        if (!(playerZ == 0 && slabs[playerX][playerY + 1][1] && slabs[playerX][playerY + 1][2])
        && !(playerZ == 2 && !slabs[playerX][playerY + 1][2] && !slabs[playerX][playerY + 1][1])
        && !(playerZ == 0 && slabs[playerX][playerY + 1][1] && slabs[playerX][playerY][2])) {
          playerY ++;
          if (slabs[playerX][playerY][playerZ + 1]) playerZ ++;
          else if (slabs[playerX][playerY][playerZ - 1] && !slabs[playerX][playerY][playerZ]) playerZ --;
        }
      }
      break;
    case UP_ARROW:
      if (playerY != 1) {
        if (!(playerZ == 0 && slabs[playerX][playerY - 1][1] && slabs[playerX][playerY - 1][2])
        && !(playerZ == 2 && !slabs[playerX][playerY - 1][2] && !slabs[playerX][playerY - 1][1])
        && !(playerZ == 0 && slabs[playerX][playerY - 1][1] && slabs[playerX][playerY][2])) {
          playerY --;
          if (slabs[playerX][playerY][playerZ + 1]) playerZ ++;
          else if (slabs[playerX][playerY][playerZ - 1] && !slabs[playerX][playerY][playerZ]) playerZ --;
        }
      }
      break;
  }
}

function mousePressed() {
  if(!slabs[floor(mouseX / 30)][floor(mouseY / 30)][1]) slabs[floor(mouseX / 30)][floor(mouseY / 30)][1] = true;
  else slabs[floor(mouseX / 30)][floor(mouseY / 30)][2] = true;
}
