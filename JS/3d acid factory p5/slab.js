function Slab(x, y, z){
  this.z = z;
  this.x = x;
  this.y = y;
  this.show = function(){
    fill(127, 220);
    rect(x, y - z * 10, 30, 30);
    fill(100, 220);
    rect(x, y + 30 - z * 10, 30, 10);
  }
}
