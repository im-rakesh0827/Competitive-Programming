#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%11==0){
        cout<<"Eleven"<<endl;
    }
    else if(n%3==0){
        cout<<"Three"<<endl;
    }
    else if(n%2==0){
        cout<<"Two"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}