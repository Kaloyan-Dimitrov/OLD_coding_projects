var glavaX=0, glavaY=0, naKoePremestvanePoredMinahPrez=[], i=0, dx=1, dy=0, plodX, tochki=0, dulshinaNaOpashkata, pause=false, scl=20, pridvishvane=0, grass=new Image(), koja=new Image(), x, y, brPridvishvania=0, start=10, stena=new Image();
stena.src="wall.jpg";
dulshinaNaOpashkata=5*scl
koja.src="koja.jpg";
plodX=Math.random()*570+100;
plodY=Math.random()*370+100;
plodX-=plodX%scl;
plodY-=plodY%scl;
grass.src="treva.jpg";
for(y=0;y<30;y+=1){
    naKoePremestvanePoredMinahPrez[y]=[]
}
for(y=0;y<30;y+=1){
    for(x=0;x<40;x+=1){
        if(Math.floor(Math.random()*35)==10){
            naKoePremestvanePoredMinahPrez[y][x]=999998;
        }
        else{
            naKoePremestvanePoredMinahPrez[y][x]=999999;
        }
    }
}
function update() {
    if(areColliding(plodX+1, plodY+1, scl-2, scl-2, glavaX*scl+1, glavaY*scl+1, scl-2, scl-2)){
        tochki+=1;
        console.log(tochki)
        plodX=Math.floor(Math.random()*570+100);
        plodY=Math.floor(Math.random()*370+100);
        plodX-=plodX%scl;
        plodY-=plodY%scl;
        dulshinaNaOpashkata+=scl;
    }
    pridvishvane+=1;
    if(pridvishvane==scl){
        brPridvishvania+=1
        glavaX+=dx;
        glavaY+=dy;
        if(glavaX==-1){
            glavaX=39;
        }
        if(glavaY==-1){
            glavaY=29;
        }
        if(glavaX==40){
            glavaX=0;
        }
        if(glavaY==30){
            glavaY=0;
        }
        if(brPridvishvania-naKoePremestvanePoredMinahPrez[glavaY][glavaX]<=dulshinaNaOpashkata/scl-1 && naKoePremestvanePoredMinahPrez[glavaY][glavaX]!=999999){
            glavaX=0;
            glavaY=0;
            dx=1;
            dy=0;
            for(y=0;y<30;y+=1){
                for(x=0;x<40;x+=1){
                    if(Math.floor(Math.random()*35)==10){
                        naKoePremestvanePoredMinahPrez[y][x]=999998;
                    }
                    else{
                        naKoePremestvanePoredMinahPrez[y][x]=999999;
                    }
                }
            }
            dulshinaNaOpashkata=scl*5;
            tochki=0;
            plodX=Math.floor(Math.random()*570+100);
            plodY=Math.floor(Math.random()*370+100);
            plodX-=plodX%scl;
            plodY-=plodY%scl;
            pridvishvane=0
            start=10;
        }
        naKoePremestvanePoredMinahPrez[glavaY][glavaX]=brPridvishvania;
        pridvishvane=start;
    }
}
var j=0;
function draw() {
    context.drawImage(grass, 0, 0, 800, 600);
    for(y=0;y<30;y+=1){
        for(x=0;x<40;x+=1){
            if(brPridvishvania-naKoePremestvanePoredMinahPrez[y][x]<=dulshinaNaOpashkata/scl-1 && naKoePremestvanePoredMinahPrez[y][x]!=999999){
                context.drawImage(koja, x*scl+1, y*scl+1, scl-2, scl-2);
            }
            if(naKoePremestvanePoredMinahPrez[y][x]==999998){
                context.fillStyle="gray";
                context.fillRect(x*scl+1, y*scl+1, scl-2, scl-2)
            }
        }
    }
    context.fillStyle="black"
    context.fillRect(glavaX*scl+1, glavaY*scl+1, scl-2, scl-2)/*
    context.fillStyle="white"
    context.fillRect(glavaX+1+7, glavaY+1+1, 1, 1)*/
    context.fillStyle="red"
    context.fillRect(plodX+1, plodY+1, scl-2, scl-2);
};
function keyup(key) {
    
    if(pause && key==80){
        pause=false
    }
    else{
    switch(key){
        case 37:
            dx=-1;
            dy=0;
            break;
        case 39:
            dx=1;
            dy=0;
            break;
        case 80:
            start=10;
            break;
        case 38:
            dx=0;
            dy=-1;
            break;
        case 40:
            dx=0;
            dy=1;
            break;
              }
    }
};
function mouseup() {
    console.log("Mouse clicked at", mouseX, mouseY);
};
