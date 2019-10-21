function setup(){
  console.log("background running");
  let url1 = 'http://api.wordnik.com/v4/words.json/search/', url2 = '?caseSensitive=false&minCorpusCount=5&maxCorpusCount=-1&minDictionaryCount=1&maxDictionaryCount=-1&minLength=1&maxLength=-1&skip=0&limit=10&api_key=a2a73e7b926c924fad7001ca3111acd55af2ffabf50eb4ae5'
  chrome.omnibox.onInputEntered.addListener(function(txt, suggester){
    var text = txt;
    var words = text.match(/\w+/g);
    for(word of words){
      console.log(word);
      var correct = $Spelling.BinSpellCheck(word);
      var suggestions = $Spelling.SpellCheckSuggest(word);
      if(correct == false && suggestions.length == 0){
        text = text.replace(word, "");
        console.log(word);
      }
      //console.log(words[i]);
    }
    var ur1 = "https://www.google.bg/search?q=", ur2 = "&rlz=1C1CHBF_enBG776BG776&oq=cat+&aqs=chrome..69i57j69i60l3j0l2.757j0j7&sourceid=chrome&ie=UTF-8";
    var urlc = ur1 + text + ur2;
    console.log("url text ", text);
    /*urlc.replace(' ', '%20');
    chrome.tabs.query({active: true, currentWindow: true}, function(tabs) {
      chrome.tabs.sendMessage(tabs[0].id, {url: urlc});
    });*/
  });
}
