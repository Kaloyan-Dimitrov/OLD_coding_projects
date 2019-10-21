// Creating variables
var cols, rows;
var w = 20;
var grid = [],
    road = [],
    short = [];
var current, ready = false;
var stack = [],
    minuemoNedostignato = 999999;
cols = Math.floor(800 / w);
rows = Math.floor(1050 / w);
for (x = 0; x < cols; x += 1) {
    road[x] = [];
    for (y = 0; y < rows; y += 1) {
        road[x][y] = minuemoNedostignato;
    }
}
for (var x = 0; x < cols; x++) {
    grid[x] = []
    for (var y = 0; y < rows; y++) {
        var cell = new Cell(x, y);
        grid[x].push(cell);
    }
}
current = grid[0][0];

function update() {
document.getElementById('canvas-id').height = Math.floor(1050 / w) * w + 1;
    current.visited = true;
    var next = current.checkNeighbors(x, y);
    if (next) {
        next.visited = true;
        stack.push(current);
        removeWalls(current, next);
        current = next;
    } else if (stack.length > 0) {
        current = stack.pop();
    }
    if (current.x == 0 && current.y == 0 && grid[3][3].visited) {
        ready = true;

    }
}

function draw() {
    context.fillStyle = "grey";
    context.fillRect(0, 0, 800, 1100);
    for (var x = 0; x < cols; x++) {
        for (var y = 0; y < rows; y++) {
            grid[x][y].show();
        }
    }
    current.highlight();
};

function removeWalls(cell1, cell2) {
    var x = cell1.x - cell2.x;
    if (x === 1) {
        cell1.walls[3] = false;
        cell2.walls[1] = false;
    } else if (x === -1) {
        cell1.walls[1] = false;
        cell2.walls[3] = false;
    }
    var y = cell1.y - cell2.y;
    if (y === 1) {
        cell1.walls[0] = false;
        cell2.walls[2] = false;
    } else if (y === -1) {
        cell1.walls[2] = false;
        cell2.walls[0] = false;
    }
}

function keyup(key) {
    // Show the pressed keycode in the console
    console.log("Pressed", key);
};

function mouseup() {
    // Show coordinates of mouse on click
    console.log("Mouse clicked at", mouseX, mouseY);
};

function Cell(x, y) {
    this.x = x;
    this.y = y;
    this.walls = [true, true, true, true];
    this.visited = false;

    this.checkNeighbors = function () {
        this.neighbors = [];
        if (this.y > 0) {
            this.top = grid[this.x][this.y - 1];
        }
        if (this.x < cols - 1) {
            this.right = grid[this.x + 1][this.y];
        }
        if (this.y < rows - 1) {
            this.bottom = grid[this.x][this.y + 1];
        }
        if (this.x > 0) {
            this.left = grid[this.x - 1][this.y];
        }

        if (this.top != undefined && !this.top.visited) {
            this.neighbors.push(this.top);
        }
        if (this.right != undefined && !this.right.visited) {
            this.neighbors.push(this.right);
        }
        if (this.bottom != undefined && !this.bottom.visited) {
            this.neighbors.push(this.bottom);
        }
        if (this.left != undefined && !this.left.visited) {
            this.neighbors.push(this.left);
        }
        if (this.neighbors.length > 0) {
            return this.neighbors[Math.floor(Math.random(0) * this.neighbors.length)];
        } else {
            return undefined;
        }
    }
    this.highlight = function () {
        var x = this.x * w;
        var y = this.y * w;
        context.fillStyle = "red";
        context.fillRect(x, y, w, w);

    }

    this.show = function () {
        var x = this.x * w;
        var y = this.y * w;
        if (this.visited) {
            context.fillStyle = 'white';
            context.fillRect(x, y, w, w);
        }
        if (ready) {
            for (var i = 0; i < short.lenght; i += 1) {
                if (short[i][0] == this.x && short[i][1] == this.y) {
                    context.fillStyle = 'green';
                    context.fillRect(x, y, w, w);
                }
            }
        }
        context.fillStyle = 'grey';
        if (this.walls[0]) { //gorna
            context.fillRect(x, y, x + w, 1);
        }
        if (this.walls[1]) { //diasna
            context.fillRect(x + w, y, 1, y + w);
        }
        if (this.walls[2]) { //dolna
            context.fillRect(x, y + w, x + w, 1);
        }
        if (this.walls[3]) { //liava
            context.fillRect(x, y, 1, y + w);
        }
    }
}
