var points = 0, playerX = 100, playerY = 500, holeH = 200, holeY, pipeX = 600;
var mina = true, mina1 = true, mic, micLevel, prevMic;
function setup(){
  mic = new p5.AudioIn();
  mic.start();
  angleMode(DEGREES);
  createCanvas(600, 600);
  holeY = random(50, 400);
}

function draw(){
  prevMic = micLevel;
  micLevel = mic.getLevel();
  if(micLevel > .20 && !mina1){
    if(!mina1){
      for(var i = 0; i < 75; i++) playerY --;
      mina1 = true;
    }
  }
  else mina1 = false;

  if(pipeX == -30){
    holeY = random(50, 400);
    pipeX = width;
  }
  background(0);
  if(playerY < height - 50) playerY += 5;
  pipeX -= 5;
  fill("green");
  rect(pipeX, 0, 30, height);
  fill(0);
  rect(pipeX, holeY, 30, holeH);//rect2
  fill(255);
  rect(playerX, playerY, 50, 50);//rect1
  if (playerX < pipeX + 30 && playerX + 50 > pipeX && playerY < holeY + holeH && 50 + playerY > holeY) {
    if(!mina){
      points ++;
      mina = true;
    }
  }
  else if(pipeX <= playerX && pipeX >= playerX + 50){
    points -= 2;
    mina = false;
  }
  else {
    mina = false;
  }
  textSize(50);
  text(points, 20, 50);
}
