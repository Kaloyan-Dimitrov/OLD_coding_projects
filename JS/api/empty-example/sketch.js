var city = "Sofia";
var apikey = "&APPID=001b0f58045147663b1ea518d34d88b4";
var api = "http://api.openweathermap.org/data/2.5/find?q=";
var units = "&units=metric";
var url = api + city + units + apikey;

function setup() {
    var button = select('#submit');
    loadJSON(url, gotData);
    button.mousePressed(weatherAsk);
    if (isKeyPressed[13]) weatherAsk();
}

function weatherAsk() {
    city = select('#city').value();
    url = api + city + units + apikey
    loadJSON(url, gotData);
}

function gotData(data) {
    createP(data.list[0].name + data.list[0].sys.country + ":" + data.list[0].main.temp + " degrees"); //.main.name);
}

function draw() {

}
