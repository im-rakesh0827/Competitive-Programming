#include "bits/stdc++.h"
using namespace std;
int isPalindrome(int num){
    int rev = 0;
    while(num!=0){
        rev = rev*10+num%10;
        num/=10;
    }
    return rev;
}
int main(){
    cout<<"Enter testcase :-> ";
    int T; cin>>T;
    while(T!=0){
        cout<<"Enter number :-> ";
        int a; cin>>a;
        cout<<"Reverse : -> "<<isPalindrome(a)<<"\n";
        if(a==isPalindrome(a)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        T--;
    }
    return 0;

}