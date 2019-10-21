// Creating variables
var myX = 400-15, myY = 300-15, posoka=0;

function update() {
    myX += Math.cos(posoka);
    myY -= Math.sin(posoka);
    posoka+=0.005
}

function draw() {
    // This is how you draw a rectangle
    context.fillRect(myX, myY, 30, 30);
};

function keyup(key) {
    // Show the pressed keycode in the console
    console.log("Pressed", key);
};

function mouseup() {
    // Show coordinates of mouse on click
    console.log("Mouse clicked at", mouseX, mouseY);
};
