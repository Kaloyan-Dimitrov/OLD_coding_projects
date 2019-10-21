// Creating variables
var x, y, z, myX = 0, myY = 0, dgray=new Image(), size=50, daRisuvamLiNaKoordinati=[], lava=new Image(), first=true, sizePlayer=10;
lava.src="lava.jpg"
dgray.src="gray.jpg"
for(x=0;x<10;x+=1){
    daRisuvamLiNaKoordinati[x]=[]
    for(y=0;y<10;y+=1){
        daRisuvamLiNaKoordinati[x][y]=[];
    }
}
for(x=0;x<10;x+=1){
    for(y=0;y<10;y+=1){
        for(z=0;z<3;z+=1){
            if(daRisuvamLiNaKoordinati[x][y][z-1] || z==0){
                daRisuvamLiNaKoordinati[x][y][z]=Math.floor(Math.random()*2)==1;
            }
        }
    }
}for(x=0;x<10;x+=1){
    if(daRisuvamLiNaKoordinati[x][0][0] && !daRisuvamLiNaKoordinati[x][0][1] && !daRisuvamLiNaKoordinati[x][0][2]){
        myY=0;
        myX=x;
        myZ=0;
        break;
    }
}
if(myX==0){
    for(x=0;x<10;x+=1){
        if(daRisuvamLiNaKoordinati[x][0][1]){
            myY=0;
            myX=x;
            myZ=1;
            break;
        }
    }
}
function update() {

}

function risuvaneNaIgrach(){
    context.fillStyle = "red";
    context.fillRect(myX*size+size/2-sizePlayer/2, myY*size+size+size/2-sizePlayer/2-myZ*size/4, sizePlayer, sizePlayer);
    context.fillStyle="darkred";
    context.fillRect(myX*size+size/2-sizePlayer/2, myY*size+size+size/2-sizePlayer/2-myZ*size/4+sizePlayer, sizePlayer, sizePlayer/3);
}

function draw() {
    for(x=0;x<10;x+=1){
        for(y=0;y<12;y+=1){
            context.drawImage(lava, x*size, y*size, size, size);
        }
    }
    for(x=0;x<10;x+=1){
        for(y=0;y<10;y+=1){
            for(z=0;z<3;z+=1){
                if(daRisuvamLiNaKoordinati[x][y][z]){
                    context.globalAlpha=1;
                    if(daRisuvamLiNaKoordinati[myX][myY+1][2]) risuvaneNaIgrach();
                    context.globalAlpha=0.5;
                    context.fillStyle="gray"
                    context.fillRect(x*size, (y*size-(z*(size/4)))+size, size, size);
                    context.strokeRect(x*size, (y*size-(z*(size/4)))+size, size, size);
                    context.drawImage(dgray, x*size, ((y*size-(z*(size/4)))+size)+size, size, size/4)
                    context.strokeRect(x*size, ((y*size-(z*(size/4)))+size)+size, size, size/4)
                    context.globalAlpha=1;
                    if(!daRisuvamLiNaKoordinati[myX][myY+1][2]) risuvaneNaIgrach();
                }
            }
        }
    }
};

function keyup(key) {
    switch(key){
        case 39:
            myX+=1;
            if(daRisuvamLiNaKoordinati[myX][myY][1])myZ=1;
            else myZ=0;
            if(daRisuvamLiNaKoordinati[myX][myY][2])myZ=2;
            break;
        case 38:
            myY-=1;
            if(daRisuvamLiNaKoordinati[myX][myY][1])myZ=1;
            else myZ=0;
            if(daRisuvamLiNaKoordinati[myX][myY][2])myZ=2;
            break;
        case 37:
            myX-=1;
            if(daRisuvamLiNaKoordinati[myX][myY][1])myZ=1;
            else myZ=0;
            if(daRisuvamLiNaKoordinati[myX][myY][2])myZ=2;
            break;
        case 40:
            myY+=1;
            if(daRisuvamLiNaKoordinati[myX][myY][1])myZ=1;
            else myZ=0;
            if(daRisuvamLiNaKoordinati[myX][myY][2])myZ=2;
            break;
    }
    // Show the pressed keycode in the console
    console.log("Pressed", key);
};

function mouseup() {
    // Show coordinates of mouse on click
    console.log("Mouse clicked at", mouseX, mouseY);
};
