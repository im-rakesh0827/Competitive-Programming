#include "iostream"
#include "math.h"
using namespace std;
int main(){
    long n; cin>>n;
    long rev = 0;
    while(n!=0){
        rev = rev*100+n%10;
        n/=10;
    }
    cout<<"Reverse :-> "<<rev<<"\n";
    return 0;
}