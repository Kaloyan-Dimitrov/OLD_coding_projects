var Engine = Matter.Engine,
  World = Matter.World,
  Bodies = Matter.Bodies;
var engine, world, circles = [];
var bottom;
function setup() {
  createCanvas(800, 800);
  engine = Engine.create();
  world = engine.world;
  bottom = Bodies.rectangle(width / 2, width - 10, width + 200, 70, {
    friction: 0,
    restitution: 0.95,
    isStatic: true
  });
  World.add(world, bottom);
}

function draw() {
  Engine.update(engine, 1000 / 30);
  background(0);
  if (frameCount % 1 == 0) {
    circles.push(new Circle(random(20, width - 20), random(20, height / 2), random(5, 20)));
  }
  rectMode(CENTER);
  fill(127);
  rect(width / 2, width - 10, width + 200, 70);
  rectMode(CORNER);
  for (var i = 0; i < circles.length; i ++){
    if(circles[i].body.position.x > width + 20 || circles[i].body.position.x < -20){
      World.remove(world, circles[i].body);
      circles.splice(i, 1);
      if(i != 0) i --;
    }
    circles[i].show();
  }
}

function mousePressed(){
  circles.push(new Circle(mouseX, mouseY, 20));
}
