#include <iostream>
#include <iterator>
#include <algorithm>
#include <math.h>
using namespace std;
bool free(int arr[], int s){
	for(int i = 0;i < s;i ++){
		if(arr[i] == 0) return i;
	}
}
bool end(int arr[], int s){
	int n = (s - 1) / 2;
	for(int i = 0;i < s;i ++){
		if(i < n and arr[i] != -1) return false;
		if(i > n and arr[i] != 1) return false;
	}
	return true;
}
void out(int out[], int s){
	for(int i = 0;i < s;i ++){
		if(out[i] == -1) cout<<"< ";
		if(out[i] == 1) cout<<"> ";
		if(out[i] == 0) cout<<"_ ";
	}
	cout<<endl;
}
bool dfs(int arr[], int s){
	if(end(arr, s)) return true;
	for(int i = 0;i < s;i ++){
		if(arr[i + arr[i]] == 0 and i != arr[i]){
			int arr1[s];
			for(int i = 0;i < s;i ++) arr1[i] = arr[i];
			swap(arr1[i], arr1[i + arr[i]]);
			if(dfs(arr1, s)){
				swap(arr[i], arr[i + arr[i]]);
			}
			out(arr, s);
		}
		if(arr[i + arr[i] * 2] == 0 and i != arr[i]){
			int arr1[s]; 
			for(int i = 0;i < s;i ++) arr1[i] = arr[i];
			swap(arr1[i], arr1[i + arr[i] * 2]);
			if(dfs(arr1, s)){
				swap(arr[i], arr[i + arr[i] * 2]);
			}
			out(arr, s);
		}
	}
	return false;
}
int main (){
int n;
cin>>n;
int size = n * 2 + 1;
int frogs[size];
for(int i = 0;i < size;i ++){
	if(i < n) frogs[i] = 1;
	if(i == n) frogs[i] = 0;
	if(i > n) frogs[i] = -1;
}
out(frogs, size);
dfs(frogs, size);
return 0;
}
/* 
>>_><<<
0123456
>>_><<<
>><>_<<
>><_><<
>><<>_<
>><<_><

*/
