// Creating variables
var myX = 385, myY = 285, vragX=[], vragY, dead=false, player=new Image(), xOtKoitoZapochvatVragovete=0, kakvoSePravi=true;
player.src="ball.jpg";
for(var i=0;i<4;i+=1){
    vragX[i]=xOtKoitoZapochvatVragovete+i*200;
    vragY=-30;
}
function update() {
    if(!dead){
        if(kakvoSePravi){
            xOtKoitoZapochvatVragovete+=1
        }
        else{
            xOtKoitoZapochvatVragovete-=1
        }
        if(xOtKoitoZapochvatVragovete==300 || xOtKoitoZapochvatVragovete==-300){
            kakvoSePravi=!kakvoSePravi
        }
        for(i=0;i<7;i+=1){
            vragY+=0.5
            if(vragY>600){
                vragY=-30;
                vragX[i]=xOtKoitoZapochvatVragovete+i*100;
            }
        }
        if(myY+30>vragY && myY<vragY+30 && (myX%100<(40+xOtKoitoZapochvatVragovete%100)%100 || myX%100>(70+xOtKoitoZapochvatVragovete%100)%100)){
            //dead=true;
            console.log("udar")
        }
        if(isKeyPressed[37]){
            myX-=3;
        }
        if(isKeyPressed[39]){
            myX+=3;
        }
        if(myX>800){
            myX=-30;
        }
        if(myX<-30){
            myX=799
        }
    }
}

function draw() {
    // This is how you draw a rectangle
    if(!dead){
    for(i=0;i<4;i+=1){
        context.fillRect(xOtKoitoZapochvatVragovete+i*200, vragY, 30, 30);
    }
    context.drawImage(player, myX, myY, 30, 30);
    }
};

function keyup(key) {
    // Show the pressed keycode in the console
    console.log("Pressed", key);
};

function mouseup() {
    // Show coordinates of mouse on click
    console.log("Mouse clicked at", mouseX, mouseY);
};
