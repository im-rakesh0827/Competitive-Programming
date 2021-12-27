#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        if(n%11==0){
            cout<<"Eleven\n";
        }
        else if(n%3==0){
            cout<<"Three\n";
        }
        else{
            cout<<"Two\n";
        }
    }
    else if(n%3==0){
            if(n%11==0){
                cout<<"Eleven\n";
            }
            else{
                cout<<"Three\n";
            }
    }
    else if(n%11==0){
        cout<<"Eleven\n";
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}