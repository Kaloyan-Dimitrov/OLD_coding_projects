// Creating variables
var i, x, y;

function update() {
}

function draw() {
    context.fillStyle="black"
    // This is how you draw a rectangle
    for(y=0;y<8;y+=1){
        for(x=0;x<8;x+=1){
            if((x+y)%2==1){
            context.fillRect(x*50, y*50, 50, 50)
            }
        }
    }
};

function keyup(key) {
    // Show the pressed keycode in the console
    console.log("Pressed", key);
};

function mouseup() {
    // Show coordinates of mouse on click
    console.log("Mouse clicked at", mouseX, mouseY);
};
