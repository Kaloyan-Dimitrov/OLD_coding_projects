var url1 = "http://api.nytimes.com/svc/search/v2/articlesearch.json?q=";
var url2 = "&api-key=99cfea65a5bb30650b3d31eb1713233e:15:73386102";


function setup() {
    noCanvas();
    var input = createInput("rainbow");
    var word = input.value();
    loadJSON(url1 + word + url2, gotData);
}

function gotData(data) {
    console.log(data.response.docs[floor(random(0, data.response.docs.length))].headline.main)
}
