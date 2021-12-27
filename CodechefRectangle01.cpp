//WAP to print either the integers are side of rectangle or not :
#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if((a==b and c==d) || (a==c and b==d) || (a==d and b==c)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}