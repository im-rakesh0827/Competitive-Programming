#include "iostream"
using namespace std;
int main(){
    cout<<"Test Cases : ";
    int T; cin>>T;
    while(T!=0){
        cout<<"Enter a number : ";
        int n; cin>>n;
        if(n%2!=0){
            cout<<"Weird\n";
        }else if(n%2==0 && n>=2 && n<=5){
            cout<<"Not Weird\n";
        }else if(n%2==0 && n>=6 && n<=20){
            cout<<"Weird\n";
        }else if(n%2==0 && n>20){
            cout<<"Not Weird\n";
        }else{
            cout<<"Invalid input : \n";
        }
        T--;
    }
}