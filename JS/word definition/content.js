//  console.log("extension running");
var lastTxt = "",
  button = false;
var word = RegExp('/[A-Z]\w+/gi'),
  text, cx = 0,
  cy = 0;
var c;

function setup() {
  var buff = createCanvas(1, 1);
  buff.remove();
  $(document).ready(function() {
    $('*').click(function() {
      text = window.getSelection().toString();
      text = text.replace(/^\s+/gi, '');
      text = text.replace(/\s+$/gi, '');
      if (text != '' && text != lastTxt && text.search(' ') == -1) {
        c = createCanvas(windowWidth - 17, document.body.clientHeight);
        c.position(0, 0);
        button = true;
        cx = mouseX;
        cy = mouseY;
        lastTxt = text;
      }
      if (text == '' && c) {
        button = false;
        c.remove();
      }
    });
  });
}

function draw() {
  //rect(cx, cy, 20, 20);
  if (c && button) c.rect(mouseX, mouseY, 20, 20);
}
