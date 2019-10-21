function preload() {
    var tex = loadImage('texture.jpg');
}

function setup(){
	createCanvas(400, 400, WEBGL);
}

function draw(){
	background(255);
	ambientLight("red");
	ambientMaterial(250);
	if (mouseButton == LEFT){
		rotateX(mouseY / 100);
		rotateZ(-mouseX / 100);
	}
    if (mouseButton === CENTER) {
        rotateY(mouseX / 100);
    }
	box();
}