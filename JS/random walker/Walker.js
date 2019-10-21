function Walker(x, y) {
    this.startX = x;
    this.startY = y;
    this.x = this.startX;
    this.y = this.startY;
    this.minati = [];
}

Walker.prototype.walk = function () {
    if (Math.floor(Math.random() * 4) < 0.25) {
        this.x += 3;
    }
    if (Math.floor(Math.random() * 4) > 0.25 && Math.floor(Math.random() * 4) < 0.50) {
        this.x -= 3;
    }
    if (Math.floor(Math.random() * 4) > 0.50 && Math.floor(Math.random() * 4) < 0.75) {
        this.y += 3;
    }
    if (Math.floor(Math.random() * 4) > 0.75 && Math.floor(Math.random() * 4) < 1) {
        this.y -= 3;
    }
    this.novk = {
        x: this.x,
        y: this.y
    }
    this.minati.push(this.novk);
}
Walker.prototype.show = function () {
    //context.ellipse(this.x, this.y, 15, 15, 45 * Math.PI / 180, 0, 2 * Math.PI);
    context.fillRect(this.x - 1.5, this.y - 1.5, 3, 3);
}
