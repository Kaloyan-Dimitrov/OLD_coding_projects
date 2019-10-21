// Creating variables
var myX = 0, i, tochki=0, myY = 285, mySkorost=0, kameraX, vragX=[], vragY=[], broiKoli=10, patronX=[], patronY=[], segPatron=0, j=0, posledenVrag=9, vsehLiTochki=[];
vragX[0]=400;
vragY[0]=300;
for(i=0;i<3;i+=1){
    patronX[i]=0;
    patronY[i]=-30
}
for(i=1;i<broiKoli;i+=1){
    vragY[i]=vragY[i-1]-100;
    vragX[i]=Math.random()*750+10;
    vsehLiTochki[i]=false;
}
function update() {
    for(i=0;i<3;i+=1){
        patronY[i]-=1
    }
    if(isKeyPressed[39]){
        myX+=3;
    }
    if(isKeyPressed[37]){
        myX-=3;
    }
    for(i=0;i<broiKoli;i+=1){
        for(j=0;j<3;j+=1){
            if(areColliding(patronX[j], patronY[j], 5, 30, vragX[i], vragY[i], 40, 40)){
                vragY[i]=vragY[posledenVrag]-100;
                vragX[i]=Math.random()*750+10;
                posledenVrag=i;
                tochki+=1
            }
        }
        vragY[i]+=1;
        if(vragY[i]>=600){
            vragY[i]=vragY[posledenVrag]-100;
            vragX[i]=Math.random()*750+10;
            posledenVrag=i;
        }
        if(!vsehLiTochki[i] && areColliding(vragX[i], vragY[i], 30, 30, myX, myY, 30, 30)){
            tochki-=5;
            vsehLiTochki[i]=true;
        }
        else{
            if(!areColliding(vragX[i], vragY[i], 30, 30, myX, myY, 30, 30)){
                vsehLiTochki[i]=false;
            }
        }
    }
}

function draw() {
    // This is how you draw a rectangle
    context.fillStyle="blue"
    context.fillRect(myX, myY, 30, 30);
    context.fillStyle="red"
    for(i=0;i<broiKoli;i+=1){
        context.fillRect(vragX[i], vragY[i], 40, 40);
    }
    context.fillStyle="yellow"
    for(i=0;i<3;i+=1){
        context.fillRect(patronX[i], patronY[i], 5, 30);
    }
    context.fillStyle="black"
    context.fillText(tochki, 0, 560, 110)
};

function keyup(key) {
    if(key==38){
        patronX[segPatron]=myX+(15-2.5);
        patronY[segPatron]=myY;
        if(segPatron==2) segPatron=0;
        else segPatron+=1;
    }
    // Show the pressed keycode in the console
    console.log("Pressed", key);
};

function mouseup() {
    // Show coordinates of mouse on click
    console.log("Mouse clicked at", mouseX, mouseY);
};
