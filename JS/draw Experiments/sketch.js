var c = [];

function setup() {
  angleMode(DEGREES);
  createCanvas(windowWidth - 10, windowHeight - 10);
}

function draw() {
  background(255);
  noFill();
  //if (frameCount % 4 == 0) c.push(new Circle(width / 2, height / 2))
  for (var i = 0; i < c.length; i++) {
    c[i].draw();
  }
}

function mousePressed() {
  c.push(new Circle(mouseX, mouseY));
}

function Circle(x, y) {
  this.x = x;
  this.y = y;
  this.radius = 1;
  this.start = true;
  this.r = random(100, 255);
  this.g = random(100, 255);
  this.b = random(100, 255);
  this.draw = function() {
    stroke(this.r, this.g, this.b);
    ellipse(this.x, this.y, this.radius);
    if(this.radius == 100 && this.start && c.length < 73){
      for (var i = -180; i < 180; i += 45){
        c.push(new Circle(this.x + this.radius / 2 * cos(i), this.y + this.radius / 2 * sin(i)));
      }
      this.start = false;
    }
    if(this.radius < 100){
      this.radius ++;
    }
  };
}
