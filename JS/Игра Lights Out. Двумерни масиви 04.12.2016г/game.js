// Creating variables
var cviatNa=[], x, y, scl=50, kliknato1X=999, kliknato1Y=999, kliknato2X=999, kliknato2Y=999, cvetove=[], cviatNaKliknato=new Image(), broiEdnakvi=0, XNaEdnakvi=[], daprLi=true, tovaXLiE=[];
cvetove[0]="candy1.jpg";
cvetove[1]="candy2.jpg";
cvetove[2]="candy3.jpg";
cvetove[3]="candy4.jpg";
cvetove[4]="candy5.jpg";
cvetove[5]="candy6.jpg";
for(x=0;x<10;x+=1){
    cviatNa[x]=[];
    for(y=0;y<10;y+=1){
        cviatNa[x][y]=new Image();
        switch(Math.floor(Math.random()*6)){
            case 0:
                cviatNa[x][y].src=cvetove[0];
                break;
            case 1:
                cviatNa[x][y].src=cvetove[1];
                break;
            case 2:
                cviatNa[x][y].src=cvetove[2];
                break;
            case 3:
                cviatNa[x][y].src=cvetove[3];
                break;
            case 4:
                cviatNa[x][y].src=cvetove[4];
                break;
            case 5:
                cviatNa[x][y].src=cvetove[5];
                break;
        }
    }
}
function update() {
}
function izbiraneNaCviat(x,y){
    switch(Math.floor(Math.random()*6)){
            case 0:
                cviatNa[x][y].src=cvetove[0];
                break;
            case 1:
                cviatNa[x][y].src=cvetove[1];
                break;
            case 2:
                cviatNa[x][y].src=cvetove[2];
                break;
            case 3:
                cviatNa[x][y].src=cvetove[3];
                break;
            case 4:
                cviatNa[x][y].src=cvetove[4];
                break;
            case 5:
                cviatNa[x][y].src=cvetove[5];
                break;
    }
}
function draw() {
    for(x=0;x<10;x+=1){
        for(y=0;y<10;y+=1){
            context.drawImage(cviatNa[x][y], x*scl, y*scl, scl, scl);
        }
    }
};

function keyup(key) {
    // Show the pressed keycode in the console
};
var a;
function mouseup() {
    //if(kliknato1X==999 && kliknato1Y==999){
        kliknato1X=Math.floor(mouseX/scl);
        kliknato1Y=Math.floor(mouseY/scl);
    cviatNaKliknato.src=cviatNa[kliknato1X][kliknato1Y].src
    if(kliknato1X!=0){
        for(x=kliknato1X;daprLi;x-=1){
            if(cviatNa[x][kliknato1Y].src==cviatNaKliknato.src){
                XNaEdnakvi[broiEdnakvi]=x
                tovaXLiE[broiEdnakvi]=true
                broiEdnakvi+=1;
            }
            if(cviatNa[x][kliknato1Y].src!=cviatNaKliknato.src || x==0){
                daprLi=false;
            }
        }
    }
    daprLi=true;
    if(kliknato1Y!=0){
        for(y=kliknato1Y-1;daprLi;y-=1){
            if(cviatNa[kliknato1X][y].src==cviatNaKliknato.src){
                XNaEdnakvi[broiEdnakvi]=y;
                tovaXLiE[broiEdnakvi]=false;
                broiEdnakvi+=1;
            }
            if(cviatNa[kliknato1X][y].src!=cviatNaKliknato.src || y==0){
                daprLi=false;
            }
        }
    }
    daprLi=true;
    if(kliknato1X!=9){
        for(x=kliknato1X+1;daprLi;x+=1){
            if(cviatNa[x][kliknato1Y].src==cviatNaKliknato.src){
                XNaEdnakvi[broiEdnakvi]=x
                tovaXLiE[broiEdnakvi]=true;
                broiEdnakvi+=1;
            }
            if(cviatNa[x][kliknato1Y].src!=cviatNaKliknato.src || x==9){
                daprLi=false;
            }
        }
    }
    daprLi=true;
    if(kliknato1Y!=9){
        for(y=kliknato1Y+1;daprLi;y+=1){
            if(cviatNa[kliknato1X][y].src==cviatNaKliknato.src){
                XNaEdnakvi[broiEdnakvi]=y;
                tovaXLiE[broiEdnakvi]=false;
                broiEdnakvi+=1;
            }
            if(cviatNa[kliknato1X][y].src!=cviatNaKliknato.src || y==9){
                daprLi=false;
            }
        }
    }
    daprLi=true;
    /*if(kliknato1X!=0){
        for(x=kliknato1X;daprLi;x-=1){
            if(cviatNa[x][kliknato1Y].src==cviatNaKliknato.src){
                XNaEdnakvi[broiEdnakvi]=x
                broiEdnakvi+=1;
            }
            if(cviatNa[x][kliknato1Y].src!=cviatNaKliknato.src || x==0){
                daprLi=false;
            }
        }
    }if(kliknato1X!=0){
        for(x=kliknato1X;daprLi;x-=1){
            if(cviatNa[x][kliknato1Y].src==cviatNaKliknato.src){
                XNaEdnakvi[broiEdnakvi]=x
                broiEdnakvi+=1;
            }
            if(cviatNa[x][kliknato1Y].src!=cviatNaKliknato.src || x==0){
                daprLi=false;
            }
        }
    }*/
    if(broiEdnakvi>=3){
        for(x=0;x<broiEdnakvi;x+=1){
            if(tovaXLiE[x]){
                izbiraneNaCviat(XNaEdnakvi[x], kliknato1Y);
            }
            else{
                izbiraneNaCviat(kliknato1X, XNaEdnakvi[x]);
            }
        }
    }
    kliknato1X=kliknato1Y=999;
    broiEdnakvi=0;
    daprLi=true;
    /*}
    else{ 
        kliknato2X=Math.floor(mouseX/scl);
        kliknato2Y=Math.floor(mouseY/scl);
        if((kliknato1X+kliknato1Y)-(kliknato2X+kliknato2Y)==-1 || (kliknato1X+kliknato1Y)-(kliknato2X+kliknato2Y)==1){
            a=cviatNa[kliknato1X][kliknato1Y]
            cviatNa[kliknato1X][kliknato1Y]=cviatNa[kliknato2X][kliknato2Y];
            cviatNa[kliknato2X][kliknato2Y]=a;
        }
    }*/
    
};
