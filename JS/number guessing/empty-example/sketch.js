var num = 37555;

function setup() {
    noCanvas();

    var bot = new RiveScript();
    bot.loadFile("brain.rive", brainReady, brainError);

    function brainReady() {
        console.log("ready");
    }

    function brainError() {
        console.log("error");
    }
    var button = select('#submit');
    var userinput = select('#user_input');
    var output = select('#output');
    button.mousePressed(chat);

    function chat() {
        var input = userinput.value();
        output.html(input);
    }
}
