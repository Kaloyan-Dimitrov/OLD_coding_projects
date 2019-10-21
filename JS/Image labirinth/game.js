// Creating variables
var myX = 0, myY = 0, poleX=20, poleY=20, size=25, pole=[], x, y, minuemoNedostignato=100001, stena=100002, vragove=[], broiVragove=10, imaLiDiasna=[], imaLiDolna=[];
for(x=0;x<poleX+2;++x){
    pole[x]=[];
    imaLiDiasna[x]=[];
    imaLiDolna[x]=[];
    for(y=0;y<poleY+2;y++){
        pole[x][y]=minuemoNedostignato;
        if(Math.random()>0.5){
            imaLiDiasna[x][y]=true;
        }
        else{
            imaLiDiasna[x][y]=false;
        }
        if(Math.random()<0.5){
            imaLiDolna[x][y]=true;
        }
        else{
            imaLiDolna[x][y]=false;
        }
    }   
}
bfs();/*
for(x=0;x<broiVragove;x+=1){
    vragove[x]=new vrag(poleX);
}*/
class vrag{
    constructor(x, y){
        this.x=x;
        this.y=y;
    }
    move(){
        if(pole[this.x-1][this.y]<pole[this.x][this.y] && pole[this.x-1][this.y]!=stena){
            if(this.x!=1){
                this.x-=1;
            }
        }
        else if(pole[this.x][this.y-1]<pole[this.x][this.y] && pole[this.x][this.y-1]!=stena){
            if(this.y!=1){
                this.y-=1;
            }
        }
        else if(pole[this.x+1][this.y]<pole[this.x][this.y] && pole[this.x+1][this.y]!=stena){
            if(this.x!=poleX){
                this.x+=1;
            }
        }
        else if(pole[this.x][this.y+1]<pole[this.x][this.y] && pole[this.x][this.y+1]!=stena){
            if(this.y!=poleX){
                this.y+=1;
            }
        }
    }
    show(){
        context.fillStyle="yellow";
        context.fillRect((this.x-1)*size+size/4, (this.y-1)*size+size/4, size/2, size/2);
    }
}
vragove[0]=new vrag(poleX, poleY);
function update() {
    if(isKeyPressed[32]){
        vragove[0].move();
    }
}

function draw() {
    for(x=1;x<poleX+1;x+=1){
        for(y=1;y<poleY+1;y+=1){
            if(pole[x][y]!=stena){
                context.fillStyle="green";
            }
            else{
                context.fillStyle="darkgray";
            }
            //context.strokeRect((x-1)*size, (y-1)*size, size, size);
            context.fillRect((x-1)*size+1, (y-1)*size+1, size, size);
            context.fillStyle="black";
            if(imaLiDolna[x][y]){
                context.fillRect((x-1)*size, (y-1)*size+size, size, 1);//dolna
            }
            if(imaLiDolna[x][y]){    
                context.fillRect((x-1)*size+size, (y-1)*size, 1, size);//diasna
            }
        }
    }
    vragove[0].show();
};

function bfs(){
    for(x=0;x<poleX+2;++x){
        for(y=0;y<poleY+2;y++){
            if(pole[x][y]!=stena){
                pole[x][y]=minuemoNedostignato;
            }
        }   
    }
    pole[poleX][poleY]=minuemoNedostignato;
    pole[1][1]=0;
    obhojdano=0;
    for(i=0;i<poleX*poleY;i+=1){
        for(x=1;x<poleX+2;x+=1){
            for(y=1;y<poleY+2;y+=1){
                if(pole[x][y]==obhojdano){
                    if(x!=1){
                        if(pole[x-1][y]==minuemoNedostignato){
                            pole[x-1][y]=obhojdano+1;
                        }
                    }
                    if(x!=poleX){
                        if(pole[x+1][y]==minuemoNedostignato){
                            pole[x+1][y]=obhojdano+1;
                        }
                    }
                    if(y!=1){
                        if(pole[x][y-1]==minuemoNedostignato){
                            pole[x][y-1]=obhojdano+1;
                        }
                    }
                    if(y!=poleY){
                        if(pole[x][y+1]==minuemoNedostignato){
                            pole[x][y+1]=obhojdano+1;
                        }
                    }
                }
            }
        }
        obhojdano+=1;
    }
};

function keyup(key) {
    console.log("Pressed", key);
};

function mouseup() {
    console.log("Mouse clicked at", Math.floor(mouseX/size)+1, Math.floor(mouseY/size)+1);
    var poslednoNatisnatoX=Math.floor(mouseX/size)+1;
    var poslednoNatisnatoY=Math.floor(mouseY/size)+1;
    pole[Math.floor(mouseX/size)+1][Math.floor(mouseY/size)+1]=stena;
    if(isKeyPressed[17]){
        pole[Math.floor(mouseX/size)+1][Math.floor(mouseY/size)+1]=minuemoNedostignato;
    }
    bfs();
    if(pole[vragove[0].x][vragove[0].y]==minuemoNedostignato || pole[vragove[0].x][vragove[0].y]==stena){
        pole[poslednoNatisnatoX][poslednoNatisnatoY]=minuemoNedostignato;
        bfs();
    }
};
