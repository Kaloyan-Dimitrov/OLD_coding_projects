var myX = 0, myY = 0, obhojdano=0, vragX=[], vragY=[], x, y, pole=[], sizePole=25, 
minuemoNedostignato="n", sizePolence=15, natisnatoLiE=false, pridvishvane=0,     broiVragove=10, zapochnahLi=false, poslednaStenaX, poslednaStenaY, rodenLiE=[], kuli=[], wall=new Image(), cannon=new Image(), mine=new Image(), izbranaKula=0, 
pari=500, cena=[], uvelicheniePari=0, imaLiMina=[], jivot=[], umrialLiE=[], patronX=[], patronY=[], broiUradia=0, uradiaX=[], uradiaY=[], cellNa=[];
wall.src="wall.png";
cannon.src="cannon.png";
mine.src="mine.png";
kuli[0]="w";
kuli[1]="m";
kuli[2]="c";
cena[0]=10;
cena[1]=100;
cena[2]=150;
vragX[0]=sizePole-1;
vragY[0]=sizePole-1;
rodenLiE[0]=true;
umrialLiE[0]=false;
jivot[0]=90;
for(x=1;x<broiVragove;x+=1){
    vragX[x]=-100;
    vragY[x]=0;
    rodenLiE[x]=false;
    umrialLiE[x]=false;
    jivot[x]=90;
}
for(x=0;x<sizePole;x+=1){
    pole[x]=[]
    imaLiMina[x]=[]
    for(y=0;y<sizePole;y+=1){
        imaLiMina[x][y]=false;
        pole[x][y]=minuemoNedostignato;
    }
}
pole[sizePole-1][sizePole-1]=minuemoNedostignato;
pole[0][0]=0;                   
pole[0][0]=0;               
function bfs(){
    for(x=0;x<sizePole;x+=1){
        for(y=0;y<sizePole;y+=1){
            if(pole[x][y]!=kuli[0] && pole[x][y]!=kuli[2]){
                pole[x][y]=minuemoNedostignato;
            }
        }
    }
    pole[sizePole-1][sizePole-1]=minuemoNedostignato;
    pole[0][0]=0;
    obhojdano=0;
    for(i=0;i<25*25;i+=1){
        for(x=0;x<sizePole;x+=1){
            for(y=0;y<sizePole;y+=1){
                if(pole[x][y]==obhojdano){
                    if(x!=0){
                        if(pole[x-1][y]==minuemoNedostignato){
                            pole[x-1][y]=obhojdano+1;
                        }
                    }
                    if(x!=sizePole-1){
                        if(pole[x+1][y]==minuemoNedostignato){
                            pole[x+1][y]=obhojdano+1;
                        }
                    }
                    if(y!=0){
                        if(pole[x][y-1]==minuemoNedostignato){
                            pole[x][y-1]=obhojdano+1;
                        }
                    }
                    if(y!=sizePole-1){
                        if(pole[x][y+1]==minuemoNedostignato){
                            pole[x][y+1]=obhojdano+1;
                        }
                    }
                }
            }
        }
        obhojdano+=1
    }
}
function update() {
    for(x=0;x<broiUradia;x+=1){
        if(cellNa[x]!=1000){
            if(vragX[cellNa[x]]*sizePolence<patronX[x]){
                patronX[x]-=1;
                if(patronX[x]>uradiaX[x]*sizePolence-((uradiaX[x]*sizePolence-vragX[cellNa[x]]*sizePolence)/2)){
                    patronY+=1;
                }
                else{
                    patronY-=1;
                }
            }else{
                patronY[x]-=1;
                if(patronX[x]<uradiaX[x]*sizePolence+((vragX[cellNa[x]]*sizePolence-uradiaX[x]*sizePolence)/2)){
                    patronY+=1;
                }
                else{
                    patronY-=1;
                }
            }
        }
    }
    if(uvelicheniePari==100){
        pari+=5;
        uvelicheniePari=0;
    }
    else{
        uvelicheniePari+=1
    }
    if(zapochnahLi){
        if(pridvishvane==sizePolence*3){
            for(x=0;x<broiVragove;x+=1){
                for(y=0;y<broiUradia;y+=1){
                    if(uradiaX[y]+uradiaY[y]>vragX[x]+vragY[x]){
                        if((uradiaX[y]+uradiaY[y])-(vragX[x]+vragY[x])<=15 && cellNa[y]==1000){
                            cellNa[y]=x;
                        }
                    }
                    else if((vragX[x]+vragY[x])-(uradiaX[y]+uradiaY[y])<=15 && cellNa[y]==1000){
                            cellNa[y]=x;
                    }
                }
                if(jivot[x]<=0){
                    rodenLiE[x]=false;
                    umrialLiE[x]=true;
                }
                if(rodenLiE[x]){
                    if(vragX[x]!=0 && pole[vragX[x]][vragY[x]]>pole[vragX[x]-1][vragY[x]]){
                        vragX[x]-=1;
                    }
                    else{
                        if(vragY[x]!=0 && pole[vragX[x]][vragY[x]]>pole[vragX[x]][vragY[x]-1]){
                            vragY[x]-=1;
                        }
                        else{
                            if(vragX[x]!=sizePole-1 && pole[vragX[x]][vragY[x]]>pole[vragX[x]+1][vragY[x]]){
                                vragX[x]+=1;
                            }
                            else{
                                if(vragY[x]!=sizePole-1 && pole[vragX[x]][vragY[x]]>pole[vragX[x]][vragY[x]+1]){
                                    vragY[x]+=1;
                                }
                            }
                        }
                    }
                    if(imaLiMina[vragX[x]][vragY[x]]){
                        imaLiMina[vragX[x]][vragY[x]]=false;
                        umrialLiE[x]=true;
                        jivot[x]-=30;
                    }
                }
                else{
                    if(((sizePole-1)*2)-(vragX[x-1]+vragY[x-1])>=5 && rodenLiE[x-1] && !umrialLiE[x]){
                        vragX[x]=sizePole-1;
                        vragY[x]=sizePole-1;
                        rodenLiE[x]=true;
                    }
                }
            }
            pridvishvane=0;
        }
        else{
            pridvishvane+=1;
        }
    }
}

function draw() {
    context.fillStyle="lightgreen";
    context.fillRect(400, 600, 30, pari-(pari*2));
    context.drawImage(wall, 500, 0, 30, 30);
    context.drawImage(mine, 500, 35, 30, 30);
    context.drawImage(cannon, 500, 70, 30, 30);
    for(x=0;x<sizePole;x+=1){
        for(y=0;y<sizePole;y+=1){
                switch(pole[x][y]){
                    case kuli[0]:
                        context.drawImage(wall, x*sizePolence, y*sizePolence, sizePolence, sizePolence);
                        break;
                    case kuli[2]:
                        context.drawImage(cannon, x*sizePolence, y*sizePolence, sizePolence, sizePolence);
                        break;
                    case minuemoNedostignato:
                        context.fillStyle="green";
                        context.fillRect(x*sizePolence, y*sizePolence, sizePolence, sizePolence);
                        break;
                }
            if(/\d/.test(pole[x][y])){
                context.fillStyle="green";
                context.fillRect(x*sizePolence, y*sizePolence, sizePolence, sizePolence);
            }
            if(imaLiMina[x][y]){
                context.drawImage(mine, x*sizePolence, y*sizePolence, sizePolence, sizePolence);
            }
        }
    }   
    for(x=0;x<broiVragove;x+=1){
        if(rodenLiE[x]){
            if(jivot[x]==30){
                context.fillStyle="red";
            }
            if(jivot[x]==60){
                context.fillStyle="orange";
            }
            if(jivot[x]==90){
                context.fillStyle="yellow";
            }
            context.fillRect(vragX[x]*sizePolence+(2.5), vragY[x]*sizePolence+(2.5), 10, 10);
        }
    }
    context.fillStyle="black";
    for(x=0;x<broiUradia;x+=1){
        context.fillRect(patronX[x], patronY[x], 5, 5);
    }
};

function keyup(key) {
    if(key!=68 && key!=17 && key!=82){
        zapochnahLi=true;
    }
};

function mouseup() {
    if(isKeyPressed[68]){
        pole[Math.floor(mouseX/sizePolence)][Math.floor(mouseY/sizePolence)]=minuemoNedostignato;
        bfs();
    }
    else{
        if(Math.floor(mouseX/sizePolence)>sizePole || Math.floor(mouseY/sizePolence)>sizePole){
            if(areColliding(mouseX, mouseY, 1, 1, 500, 0, 30, 30)){
                izbranaKula=0;
            }
            if(areColliding(mouseX, mouseY, 1, 1, 500, 35, 30, 30)){
                izbranaKula=1;
            }
            if(areColliding(mouseX, mouseY, 1, 1, 500, 70, 30, 30)){
                izbranaKula=2;
            }
        }
        else{
            if(cena[izbranaKula]<=pari && /\d/.test(pole[Math.floor(mouseX/sizePolence)][Math.floor(mouseY/sizePolence)])){
                pari-=cena[izbranaKula];
                if(izbranaKula!=1){
                    pole[Math.floor(mouseX/sizePolence)][Math.floor(mouseY/sizePolence)]=kuli[izbranaKula];
                }
                poslednaStenaX=Math.floor(mouseX/sizePolence);
                poslednaStenaY=Math.floor(mouseY/sizePolence);
                if(izbranaKula==2){
                    broiUradia+=1;
                    cellNa[broiUradia-1]=10000;
                    uradiaX[broiUradia-1]=poslednaStenaX;
                    uradiaY[broiUradia-1]=poslednaStenaY;
                    patronX[broiUradia-1]=uradiaX[broiUradia-1]+sizePolence/2-2.5;
                    patronY[broiUradia-1]=uradiaY[broiUradia-1]+sizePolence/2-2.5;
                }
                else{
                    imaLiMina[Math.floor(mouseX/sizePolence)][Math.floor(mouseY/sizePolence)]=true;
                }
                bfs();
                if(pole[sizePole-1][sizePole-1]==minuemoNedostignato){
                    pole[poslednaStenaX][poslednaStenaY]=minuemoNedostignato;
                    bfs();
                    pari+=cena[izbranaKula]
                }
            }
        }
    }
};
