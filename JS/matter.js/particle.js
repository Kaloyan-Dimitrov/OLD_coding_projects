function Circle(x, y, r) {
  var options = {
    friction: 0,
    density: 100
  };
  //console.log(y);
  this.body = Bodies.circle(x, y, r, options);
  World.add(world, this.body);
  this.show = function() {
    var angle = this.body.angle;
    var pos = this.body.position;
    push();
    //console.log(pos.y);
    translate(pos.x, pos.y);
    //rotate(angle);
    rectMode(CENTER);
    strokeWeight(5);
    stroke(127);
    fill(255);
    ellipse(0, 0, r * 2);
    pop();
  }
}
