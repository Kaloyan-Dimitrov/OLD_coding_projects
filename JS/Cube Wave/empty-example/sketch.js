var angle = 0, w = 24;

function setup(){
	createCanvas(400, 400, WEBGL);
}

function draw(){
	background(100);
	ortho(-500, 500, 500, -500, 0, 1000);
	rotateX(-PI / 4);
	rotateY(atan(1 / sqrt(2)));
	var off=0;
	for(var z = 0; z < height; z += w){
		for(var x = 0; x < width; x += w){
			push();
			var d = dist(x, z, width / 2, height / 2);
			off = map(d, 0, dist(0, 0, 200, 200), -PI, PI);
			var a = angle + off;
			var h = floor(map(sin(a), -1, 1, 100, 300));
			translate(x - width / 2, 0,  z - height / 2);
			normalMaterial();
			box(w - 2, h, w - 2);
			//rect(x - width / 2 + w / 2, 0, w - 2, h);
			pop();
		}
	}	
	
	angle -= 0.2;
}