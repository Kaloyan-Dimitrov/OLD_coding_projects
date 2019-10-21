// Creating variables
var socket = io(), textbr=0, mess="", text=[], dul=0, parvoLiE=true, name="", imeNa=[], myColor="white", colorOf=[], staromess=[], scrollX=1356, scrollY=0, uparrow=new Image(), downarrow=new Image();

socket.on('message', function(mess, ime, color){
    colorOf.push(color);
    text.push(mess);
    imeNa.push(ime);
    if(ime!=name){
        alert(ime + ': ' +mess);
    }
    ++textbr;
});

socket.on('color', function(color){
    if(myColor=="white"){
        myColor=color;
    }
});
function update() {
    mess.replace("undefined", "");
}

function draw() {
    context.strokeRect(1, 1, 799, 55);
    context.drawImage(uparrow, 1365, 0, 10, 10);
    context.drawImage(downarrow, 1365, 0, 10, 10);
    context.fillStyle="gray";
    context.fillRect(scrollX, scrollY, 10, 660);
    context.fillStyle=myColor;
    context.font="40px Arial";
    context.fillText(mess, 400, 150+textbr*75+30+5);
    context.fillText(name, 600-(name.length*25), 40);
    for(var i=0;i<textbr;++i){
        context.fillStyle=colorOf[i];
        context.fillText(imeNa[i]+":", 0, 150+i*75);
        context.fillText(text[i], 0, 150+i*75+30+5);
    }
}

function keyup(key) {
    console.log(key);
    if(key!=13){
        if(key==87){
            mess+="У";staromess.push(mess);staromess.push(mess);
        }
        if(key==69){
            
            mess+="Е";staromess.push(mess);
        }
        if(key==82){
            
            mess+="И";staromess.push(mess);
        }
        if(key==84){
            
            mess+="Ш";staromess.push(mess);
        }
        if(key==89){
            
            mess+="Щ";staromess.push(mess);
        }
        if(key==85){
            
            mess+="К";staromess.push(mess);
        }
        if(key==73){
            
            mess+="С";staromess.push(mess);
        }
        if(key==79){
            
            mess+="Д";staromess.push(mess);
        }
        if(key==80){
            
            mess+="З";staromess.push(mess);
        }
        if(key==219){
            
            mess+="Ц";staromess.push(mess);
        }
        
        if(key==65){
            
            mess+="Ь";staromess.push(mess);
        }
        if(key==83){
            
            mess+="Я";staromess.push(mess);
        }
        if(key==68){
            
            mess+="А";staromess.push(mess);
        }
        if(key==70){
            
            mess+="О";staromess.push(mess);
        }
        if(key==71){
            
            mess+="Ж";staromess.push(mess);
        }
        if(key==72){
            
            mess+="Г";staromess.push(mess);
        }
        if(key==74){
            
            mess+="Т";staromess.push(mess);
        }
        if(key==75){
            
            mess+="Н";staromess.push(mess);
        }
        if(key==76){
            
            mess+="В";staromess.push(mess);
        }
        if(key==186){
            
            mess+="М";staromess.push(mess);
        }
        if(key==222){
            
            mess+="Ч";staromess.push(mess);
        }
        
        if(key==226){
            
            mess+="Ѝ";staromess.push(mess);
        }
        if(key==90){
            
            mess+="Ю";staromess.push(mess);
        }
        if(key==88){
            
            mess+="Й";staromess.push(mess);
        }
        if(key==67){
            
            mess+="Ъ";staromess.push(mess);
        }
        if(key==66){
            
            mess+="Ф";staromess.push(mess);
        }
        if(key==78){
            
            mess+="Х";staromess.push(mess);
        }
        if(key==77){
            
            mess+="П";staromess.push(mess);
        }
        if(key==188){
            
            mess+="Р";staromess.push(mess);
        }
        if(key==190){
            
            mess+="Л";staromess.push(mess);
        }
        if(key==191){
            
            mess+="Б";staromess.push(mess);
        }
        if(key==187){
            
            mess+=".";staromess.push(mess);
        }
        
        if(key==32){
            
            mess+=" ";staromess.push(mess);
        }
        if(key==8){
            if(staromess.length>=2){
                mess=staromess[staromess.length-2];
                staromess.pop();
            }
            if(staromess.length==1){
                staromess.pop();
                mess="";
            }
        }
}
    else{
        if(parvoLiE){
            name=mess;
            parvoLiE=false;
        }
        else{
            socket.emit('message', mess, name, myColor);    
        }
        mess="";
        for(i=0;i<staromess.length*3;++i){
            staromess.pop();
        }
    }
}
function mouseup() {
    console.log(mouseX, mouseY)
}
