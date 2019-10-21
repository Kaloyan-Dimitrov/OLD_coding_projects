var font;
var points = [];

function preload() {
  font = loadFont('RammettoOne-Regular.ttf');
}

function setup(){
  createCanvas(800, 400);
}

function draw(){
  points = font.textToPoints(inp, 100, 200, 200);
  for(pt of points){
    strokeWeight(4);
    point(pt.x, pt.y);
  }
}

function 
