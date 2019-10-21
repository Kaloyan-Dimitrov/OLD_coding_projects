var xml;
var url1 = 'https://www.google.bg/search?q=',
  url2 = '&rlz=1C1CHBF_enBG776BG776&oq=youtube&aqs=chrome..69i64j5j0l4.21070j0j7&sourceid=chrome&ie=UTF-8';

function preload() {
  xml = loadXML(url1 + 'youtube' + url2);
}

function setup() {

}
