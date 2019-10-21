var win = false, b, kr = [5], cW = '', f = false, found = [5], out, cX, cY, cont=true, poslednox=-1, poslednoy=-1;
var outC = 2, pressed = [5], predishenx = -1, predisheny = -1, wx = 481, wy = 400;
function setup(){
	for (var a=0;a<5;a++) {
		kr[a] = [3];
		found[a] = [3];
		pressed[a] = [3];
	}
	for (var y=0;y<3;y++) {
		for(var x=0;x<5;x++){
			kr[x][y] = '';
			found[x][y] = false;
			pressed[x][y] = true;
		}
	}
	cW = random(countries);
	console.log(cW);
	cX = [cW.length];
	cY = [cW.length];
	for(var i=0;i<cW.length;i++){
		cX[i] = floor(random(0, 5));
		cY[i] = floor(random(0, 3));
		cont=true;
		while(cont){
			if(kr[cX[i]][cY[i]]=='') cont=false;
			else{
				cX[i] = floor(random(0, 5));
				cY[i] = floor(random(0, 3));
			}
		}
		kr[cX[i]][cY[i]] = cW[i];
	}
	for (var y=0;y<3;y++) {
		for(var x=0;x<5;x++){
			var m = floor(random(1040, 1071));
			while(char(m)=='Э' || char(m)=='Ы'){
				var m = floor(random(1040, 1071));
			}
			if(kr[x][y] == '') kr[x][y] = char(m);
		}
	}
	createCanvas(wx, wy);
	out = cW[0];
	for(var i=1;i<cW.length;i++) out+="_ ";
	f = true;
}
function draw(){
	background(200);
	for (var y=2;y<5 && f;y++) {
		for(var x=0;x<5;x++){
			//if(mouseIsPressed && mouseX>=10+x*78 && mouseX<=10+x*78+69 && mouseY>=10+y*78 && mouseY<=10+y*78+69) found[x][y] = true;
			if(!found[x][y]) fill('green');
			else if(kr[x][y]!=' ') fill('red');
			if(!(predishenx==x && predisheny==y) && pressed[x][y-2] && mouseIsPressed && mouseX >= 50 + x * 78 && mouseX <= 50 + x * 78 + 69 && mouseY >= 10 + y * 78 && mouseY <= 10 + y * 78 + 69){
				out = out.substring(0, outC-1) + kr[x][y-2] + out.substring(outC+1, out.length);
				outC += 1;
				found[x][y] = true;
				pressed[x][y-2] = false;
				predishenx = x;
				predisheny = y;
			}
			if(!win){
				rect(50+x*78, 10+y*78, 69, 69);
				textSize(60);
				fill(0, 0, 255);
				textAlign(CENTER);
				text(kr[x][y-2], x*78+50+34, y*78+10+55);
			}
			if(outC>out.length){
				if(out==cW && !win){
					win = true;
					respawn();
				}
				else{
					if(!win){
						out = cW[0];
						for(var i=1;i<cW.length;i++) out+="_ ";
					}
					for (var b=2;b<5;b++) {
						for(var a=0;a<5;a++){
							found[a][b]=false;
							pressed[a][b-2] = true;
						}
					}
					outC = 2;
				}
			}

		}
	}
	if(win) fill('green');
	textAlign(LEFT);
	text(out, (481-textWidth(out))/2, 100);
}

function mousePressed(){
	console.log('x =', mouseX, 'y =', mouseY);
}

function keyPressed(){
	if(keyCode === BACKSPACE){
		out = cW[0];
		for(var i=1;i<cW.length;i++) out+="_ ";
		for (var b=2;b<5;b++) {
			for(var a=0;a<5;a++){
				found[a][b]=false;
				pressed[a][b-2] = true;
			}
		}
		outC = 2;
	}
}

function respawn(){
	setTimeout(function (){
		var r = confirm("Do you want to play this awesome game again?");
		if(r == true){}
		else{
				out = 'BYE';
		}
		win = false;
		kr = [5];
	 	cW = '';
	 	f = false;
		found = [5];
		cont=true;
		poslednox=-1;
		poslednoy=-1;
		outC = 2;
		pressed = [5];
		predishenx = -1;
		predisheny = -1;
		wx = 481;
		wy = 400;
		setup();
	}, 1000);
}
