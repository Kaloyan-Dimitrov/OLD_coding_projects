console.log("extension running");
var p;/*
$(document).ready(function(){
    $("body").css("font-family", "Arial, Helvetica, sans-serif");
});*/$(document).ready(function(){
          var $area = $('.main_area').css({
                     'cursor':'none'
               }),
          $myCursor = $('.custom_cursor').css({
                     'position': 'fixed',
                     'z-index': '999'
               })

          if ($myCursor.lenght){
           $area
               .on('mouseout.customCursor', function(){
                     $myCursor.hide()
               })
               .on('mousemove.customCursor', function(event){
                     $myCursor.show().css({
                       'left': event.clientX - 20,
                       'top': event.clientY + 7
                     })
               })
          }
     });
