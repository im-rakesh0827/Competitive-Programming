#include <iostream>
using namespace std;

int main() 
{
    int T; cin>>T;
    while(T--){
      int n=3;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      int m1 = 3*arr[1];
      int m2 = arr[n-1];
      int diff = m1-m2;
      if(diff>=3){
        cout<<"Pass\n";
      }else{
        cout<<"Fail\n";
      }
    }
    return 0;
}