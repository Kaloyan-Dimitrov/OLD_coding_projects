// Creating variables
var walkers = [],
    i, colors = ["red", "blue", "aqua", "black", "yellow", "green", "grey", "orange", "rose", "brown"];

for (i = 0; i < 5; i++) {
    walkers[i] = new Walker(100 + i * 60, 100 + 40 * i);
}

function update() {
    for (i = 0; i < 5; i++) {
        walkers[i].walk();
    }
}

function draw() {
    for (i = 0; i < 5; i++) {
        walkers[i].show();
        if (walkers[i].minati.length <= 50) {
            for (var j = 0; j < walkers[i].minati.length; j++) {
                context.fillStyle = colors[i];
                context.fillRect(walkers[i].minati[j].x - 1.5, walkers[i].minati[j].y - 1.5, 3, 3);
            }
        } else {
            for (var j = walkers[i].minati.length - 50; j < walkers[i].minati.length; j++) {
                context.fillStyle = colors[i];
                context.fillRect(walkers[i].minati[j].x - 1.5, walkers[i].minati[j].y - 1.5, 3, 3);
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





//function Walker(x, y) {
//    this.startX = x;
//    this.startY = y;
//    this.x;
//    this.y;
//}
//
//Walker.prototype.walk = function () {
//    switch (Math.floor(Math.random() * 4)) {
//        case 0:
//            this.x += 3;
//            break;
//        case 1:
//            this.x -= 3;
//            break;
//        case 2:
//            this.y += 3;
//            break;
//        case 3:
//            this.x -= 3;
//            break;
//    }
//}
//Walker.prototype.show = function () {
//    context.ellipse(this.x, this.y, 15, 15, 45 * Math.PI / 180, 0, 2 * Math.PI);
//}
