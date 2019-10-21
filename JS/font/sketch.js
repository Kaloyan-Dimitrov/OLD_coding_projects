                  $(function() {
  $("#screen").css({
    "width": document.documentElement.clientWidth,
    "minHeight": document.documentElement.clientHeight
  });
  $(document).click(function() {
    $("#type").trigger("focus");
  });
  $(document).keyup(function() {
    $("#type").trigger("focus");
  });
  var terms = [
    "$(  function  (){\ n \ t $. database . get (' Password ')\ n });",
    " exec ({\ n \ t ' Password ' : ' KbJ7zpQ ',\ n \ t ' Username ' : ' Administrator '\ n });",
    ">>>  Command   Returned   2 ",
    ">>>  Return   0 ;",
    "##    Server      Connected   Succesfully ",
    "##   ERROR   AT   THIS . MAIN . arpg   32 : 54 ",
    " CRITCAL   console . error (  -*-  );  13545aadef45644v5  ",
    "##   Server   new   connection   private   public : [].{} ' Password : ' admin '  user :  UNKNOWN '",
    " ABORTING   MISSION   CRITICAL   ERROR  ",
    " You   are   HAcked   my   dear ",
    "##   Server     Disconnected   at   port   127 . 0 . 0 . 1 :  critical   console . error ();",
    "##   Connection     Refused  ",
    " ACCESS   DENIED ",
    " ACCESS   GRANTED ",
    " Password : ********\ n >>>  Incorrect   Password \ n ##  Server   Disconnected ",
    "\ n \ nNMAP \ n \ n \ tIP :  198 . 162 . 0 . 24 \ n \ tPlatform :  Linux   armv7 \ n \ tUsers   Connected :  27 \ n \ tNetmask :  255 . 255 . 255 . 0 \ n \ t0   flags   up \ n \ n \ t ",
    " Reconnecting ...",
    ">>> ' Leave   a   like !\ n \ tBy :  Kaloyan   Dimitrov '",
    "/ bin  ~ #  sudo   chown  / system /",
    "$. system . on ();\ n \ t [ SYSTEM ]: Antivirus   Protocol   Overridden \ n \ t [ SERVER ]: Firewall   Disabled \ n \ t ",
    "[ ROOT ]: Filesystem   Formatted   ACCESS   GRANTED   coding :  node . js ",
    " oauth :  ks7bJpp8bvxz35hq . preapend [ jquery ]. rotts  "
  ];

  $("#type").keyup(function(e) {
    var random = (Math.floor(Math.random() * terms.length));
    breakSpace = new RegExp("\n", "g");
    tabSpace = new RegExp("\t", "g");
    try {
      terms[random] = terms[random].replace(breakSpace, "<br />");
      terms[random] = terms[random].replace(tabSpace, "&nbsp;&nbsp;&nbsp;&nbsp;");
    } catch (err) {}
    $("body").append(terms[random] + "<br />");
    window.scrollTo(0, document.body.scrollHeight);
  });
  $("#type").trigger("focus");
});
