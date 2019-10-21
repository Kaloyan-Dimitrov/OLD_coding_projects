#include<iostream>
#include<cstring>
using namespace std;

int main(){
long long ravni=0;
char vhod[10][10],dumi[500][10]={
"the*","name*",
"of*","very*",
"to*","through*",
"and*","just*",
"a*","form*",
"in*","much*",
"is*","great*",
"it*","think*",
"you*","say*",
"that*","help*",
"he*","low*",
"was*","line*",
"for*","before*",
"on*","turn*",
"are*","cause*",
"with*","same*",
"as*","mean*",
"I*","differ*",
"his*","move*",
"they,*","right*",
"be,*","boy*",
"at,*","old*",
"one,*","too*",
"have,*","does*",
"this*","tell*",
"from*","sentence*",
"or*","set*",
"had*","three*",
"by*","want*",
"hot*","air*",
"but*","well*",
"some*","also*",
"what*","play*",
"there*","small*",
"we*","end*",
"can*","put*",
"out*","home*",
"other*","read*",
"were*","hand*",
"all*","port*",
"your*","large*",
"when*","spell*",
"up*","add*",
"use*","even*",
"word*","land*",
"how*","here*",
"said*","must*",
"an*","big*",
"each*","high*",
"she*","such*",
"which*","follow*",
"do*","act*",
"their*","why*",
"time*","ask*",
"if*","men*",
"will*","change*",
"way*","went*",
"about*","light*",
"many*","kind*",
"then*","off*",
"them*","need*",
"would*","house*",
"write*","picture*",
"like*","try*",
"so*","us*",
"these*","again*",
"her*","animal*",
"long*","point*",
"make*","mother*",
"thing*","world*",
"see*","near*",
"him*","build*",
"two*","self*",
"has*","earth*",
"look*","father*",
"more*","head*",
"day*","stand*",
"could*","own*",
"go*","page*",
"come*","should*",
"did*","country*",
"my*","found*",
"sound*","answer*",
"no*","school*",
"most*","grow*",
"number*","study*",
"who*","still*",
"over*","learn*",
"know*","plant*",
"water*","cover*",
"than*","food*",
"call*","sun*",
"first*","four*",
"people*","thought*",
"may*","let*",
"down*","keep*",
"side*","eye*",
"been*","never*",
"now*","last*",
"find*","door*",
"any*","between*",
"new*","city*",
"work*","tree*",
"part*","cross*",
"take*","since*",
"get*","hard*",
"place*","start*",
"made*","might*",
"live*","story*",
"where*","saw*",
"after*","far*",
"back*","sea*",
"little*","draw*",
"only*","left*",
"round*","late*",
"man*","run*",
"year*","don't*",
"came*","while*",
"show*","press*",
"every*","close*",
"good*","night*",
"me*","real*",
"give*","life*",
"our*","few*",
"under*","stop*",
"open*","ten*",
"seem*","simple*",
"together*","several*",
"next*","vowel*",
"white*","toward*",
"children*","war*",
"begin*","lay*",
"got*","against*",
"walk*","pattern*",
"example*","slow*",
"ease*","center*",
"paper*","love*",
"often*","person*",
"always*","money*",
"music*","serve*",
"those*","appear*",
"both*","road*",
"mark*","map*",
"book*","science*",
"letter*","rule*",
"until*","govern*",
"mile*","pull*",
"river*","cold*",
"car*","notice*",
"feet*","voice*",
"care*","fall*",
"second*","power*",
"group*","town*",
"carry*","fine*",
"took*","certain*",
"rain*","fly*",
"eat*","unit*",
"room*","lead*",
"friend*","cry*",
"began*","dark*",
"idea*","machine*",
"fish*","note*",
"mountain*","wait*",
"north*","plan*",
"once*","figure*",
"base*","star*",
"hear*","box*",
"horse*","noun*",
"cut*","field*",
"sure*","rest*",
"watch*","correct*",
"color*","able*",
"face*","pound*",
"wood*","done*",
"main*","beauty*",
"enough*","drive*",
"plain*","stood*",
"girl*","contain*",
"usual*","front*",
"young*","teach*",
"ready*","week*",
"above*","final*",
"ever*","gave*",
"red*","green*",
"list*","oh*",
"though*","quick*",
"feel*","develop*",
"talk*","sleep*",
"bird*","warm*",
"soon*","free*",
"body*","minute*",
"dog*","strong*",
"family*","special*",
"direct*","mind*",
"pose*","behind*",
"leave*","clear*",
"song*","tail*",
"measure*","produce*",
"state*","fact*",
"product*","street*",
"black*","inch*",
"short*","lot*",
"numeral*","nothing*",
"class*","course*",
"wind*","stay*",
"question*","wheel*",
"happen*","full*",
"complete*","force*",
"ship*","blue*",
"area*","object*",
"half*","decide*",
"rock*","surface*",
"order*","deep*",
"fire*","moon*",
"south*","island*",
"problem*","foot*",
"piece*","yet*",
"told*","busy*",
"knew*","test*",
"pass*","record*",
"farm*","boat*",
"top*","common*",
"whole*","gold*",
"king*","possible*",
"size*","plane*",
"heard*","age*",
"best*","dry*",
"hour*","wonder*",
"better*","laugh*",
"true.*","thousand*",
"during*","ago*",
"hundred*","ran*",
"am*","check*",
"remember*","game*",
"step*","shape*",
"early*","yes*",
"hold*","hot*",
"west*","miss*",
"ground*","brought*",
"interest*","heat*",
"reach*","snow*",
"fast*","bed*",
"five*","bring*",
"sing*","sit*",
"listen*","perhaps*",
"six*","fill*",
"table*","east*",
"travel*","weight*",
"less*","language*",
"morning*","among*"
};
for(long long i=0;i<10;i++){
    for(long long j=0;vhod[i][j-1]!='*';j++){
        cin>>vhod[i][j];
    }
}
for(long long i=0;i<10;i++){
    for(long long j=0;j<500;j++){
        if(strcmp(vhod[i],dumi[j])==0){
            ravni++;
        }
    }
    if(ravni==0){
        for(long long o=0;vhod[i][o]!='*';o++){
                if(vhod[i][o]=='/'){
                    vhod[i][o]=417;}

                if(vhod[i][o]=='.'){
                    vhod[i][o]=427;}

                if(vhod[i][o]==','){
                    vhod[i][o]=480;}

                if(vhod[i][o]=='m'){
                    vhod[i][o]=431;}

                if(vhod[i][o]=='n'){
                    vhod[i][o]=485;}

                if(vhod[i][o]=='b'){
                    vhod[i][o]=484;}

                if(vhod[i][o]=='c'){
                    vhod[i][o]=490;}

                if(vhod[i][o]=='x'){
                    vhod[i][o]=425;}

                if(vhod[i][o]=='z'){
                    vhod[i][o]=494;}

                if(vhod[i][o]==';}'){
                    vhod[i][o]=428;}

                if(vhod[i][o]=='l'){
                    vhod[i][o]=418;}

                if(vhod[i][o]=='k'){
                    vhod[i][o]=429;}

                if(vhod[i][o]=='j'){
                    vhod[i][o]=482;}

                if(vhod[i][o]=='h'){
                    vhod[i][o]=419;}

                if(vhod[i][o]=='g'){
                    vhod[i][o]=422;}

                if(vhod[i][o]=='f'){
                    vhod[i][o]=430;}

                if(vhod[i][o]=='d'){
                    vhod[i][o]=416;}

                if(vhod[i][o]=='s'){
                    vhod[i][o]=495;}

                if(vhod[i][o]=='a'){
                    vhod[i][o]=492;}

                if(vhod[i][o]=='['){
                    vhod[i][o]=486;}

                if(vhod[i][o]=='p'){
                    vhod[i][o]=423;}

                if(vhod[i][o]=='o'){
                    vhod[i][o]=420;}

                if(vhod[i][o]=='i'){
                    vhod[i][o]=481;}

                if(vhod[i][o]=='u'){
                    vhod[i][o]=426;}

                if(vhod[i][o]=='y'){
                    vhod[i][o]=489;}

                if(vhod[i][o]=='t'){
                    vhod[i][o]=488;}

                if(vhod[i][o]=='r'){
                    vhod[i][o]=424;}

                if(vhod[i][o]=='e'){
                    vhod[i][o]=421;}

                if(vhod[i][o]=='w'){
                    vhod[i][o]=483;}

            }
        }
        ravni=0;
}
for(long long i=0;i<10;i++){
    for(long long j=0;vhod[i][j]!='*';j++){
        cout<<vhod[i][j];
    }
    cout<<endl;
}
return 0;
}
