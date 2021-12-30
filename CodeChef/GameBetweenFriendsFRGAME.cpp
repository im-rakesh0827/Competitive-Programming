#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int A, B, C, D;
        cin>>A>>B>>C>>D;

        int loss = min(A, B);
        if(loss==A){
            A+=C;
        }else{
            B+=C;
        }
        int loss1 = min(A, B);
        if(loss1==B){
            B+=D;
        }else{
            A+=D;
        }
        if(A>=B){
            cout<<"N\n";
        }else{
            cout<<"S\n";
        }
    }

}

//Input : 
// 3
// 2 3 4 5
// 3 3 3 3
// 2 3 1 2

//Output : 
// S
// N
// S



// #include <iostream>
// using namespace std;

// int main() {
// 	int t,a,b,c,d;
// 	cin>>t;
// 	while(t--){
// 	    cin>>a>>b>>c>>d;
// 	    if(a>=b) b+=c;
// 	    else a+=c;
// 	    if(a>=b) b+=d;
// 	    else a+=d;
	    
// 	   if(a>=b) cout<<"N"<<endl;
// 	   else cout<<"S"<<endl;
	    
// 	}
// 	return 0;
// }

