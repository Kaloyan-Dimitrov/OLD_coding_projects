function update() {}

function draw() {
    drawsq(300, 200, mouseX);
};

function keyup(key) {
    // Show the pressed keycode in the console
    console.log("Pressed", key);
};

function mouseup() {
    // Show coordinates of mouse on click
    console.log("Mouse clicked at", mouseX, mouseY);
};

function drawsq(x, y, w) {
    context.strokeRect(x, y, mouseX, mouseX);
    if (mouseX >= 2) {
        drawsq(x + mouseX, y + mouseX, mouseX / 2);
        drawsq(x - mouseX / 2, y - mouseX / 2, mouseX / 2);
        //        dramouseXsq(x + mouseX, y - mouseX / 2, mouseX / 2);
        //        dramouseXsq(x - mouseX / 2, y + mouseX, mouseX / 2);
    }
}
