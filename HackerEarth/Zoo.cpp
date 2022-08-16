#include "bits/stdc++.h"
using namespace std;
int main(){

    string s; 
    getline(cin, s);
	int numz = 0;
	int numo = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='z' or s[i]=='Z'){
			numz++;
		}else{
			numo++;
		}
	}
	if(numo==2*numz){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}