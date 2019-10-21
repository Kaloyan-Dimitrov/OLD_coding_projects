var i, tochki=0, myY = [], notaX=[], notaY=[], poslednaNota=0, zlaLiE=[];
myY[0]
notaX[0]=800;
switch(Math.floor(Math.random()*4)){
    case 0:
        notaY[0]=59;
        break;
    case 1:
        notaY[0]=209;
        break;
    case 2:
        notaY[0]=359;
        break;
    case 3:
        notaY[0]=509;
        break;
}
zlaLiE[0]=false;
function prerazhdane(){
    notaX[i]=notaX[poslednaNota]+150;
    switch(Math.floor(Math.random()*4)){
        case 0:
            notaY[i]=59;
            break;
        case 1:
            notaY[i]=209;
            break;
        case 2:
            notaY[i]=359;
            break;
        case 3:
            notaY[i]=509;
            break;
    }
    if(Math.floor(Math.random()*5)==0){
        zlaLiE[i]=true;
    }
    else{
        zlaLiE[i]=false;
    }
    poslednaNota=i;
}
for(i=1;i<5;i+=1){
    prerazhdane();
}
function update() {
    for(i=0;i<5;i+=1){
        notaX[i]-=1;
        if(areColliding(notaX[i], notaY[i], 30, 30, 0, myY, 30, 30)){
            if(zlaLiE[i]){
                tochki-=1;
                console.log("Ti zagubi tochka", tochki);
            }
            else{
                tochki+=1;
                console.log("Ti specheli tochki", tochki);
            }
            prerazhdane();
        }
        if(notaX[i]<0){
            if(!zlaLiE[i]){
                tochki-=1;
                console.log("Ti zagubi tochka", tochki);
            }
            else{
                tochki+=1;
                console.log("Ti specheli tochki", tochki);
            }
            prerazhdane();
        }
    }
}

function draw() {
    context.fillStyle="blue";
    context.fillRect(0, myY, 30, 30)
    context.fillRect(0, 0, 800, 1);
    context.fillRect(0, 150, 800, 1);
    context.fillRect(0, 300, 800, 1);
    context.fillRect(0, 450, 800, 1);
    context.fillRect(0, 599, 800, 1);
    context.fillRect(400, 0, 1, 600);
    for(i=0;i<5;i+=1){
        if(zlaLiE[i]){
            context.fillStyle="red";
        }
        else{
            context.fillStyle="green";
        }
        context.fillRect(notaX[i], notaY[i], 30, 30);
    }
};

function keyup(key) {
    if(key==40){
        if(myY!=509){
            myY+=150;
        }
        else{
            myY=59;
        }
    }
    if(key==38){
        if(myY!=59){
            myY-=150;
        }
        else{
            myY=509;
        }
    }
};

function mouseup() {
    console.log("Mouse clicked at", mouseX, mouseY);
};
