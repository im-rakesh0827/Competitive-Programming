#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int i=0;
    // while (i<n){
    //     cin>>a[i];
    //     i++;
    // }
    int sum;
    // for(int i=0; i<n; i++){
    //     sum=0;
    //     for(int j=i; j<n; j++){
    //         sum+=a[j];
    //         cout<<sum<<" ";
    //     }
    // }
    // cout<<"\n";
    
    while(i<n){
        int j=i;
        sum=0;
        while (j<n)
        {
            sum+=a[j];
            cout<<sum<<" ";
            j++;
        }
        i++;
        
    }
    cout<<"\n";
    return 0;
}