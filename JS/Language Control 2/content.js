console.log("Chrome extention ready to go!");
console.log("new");
chrome.runtime.onMessage.addListener(function(request, sender, sendResponse) {
    /*console.log(request.url);*/window.location.href = /*"google.com"//*/request.url;
});
