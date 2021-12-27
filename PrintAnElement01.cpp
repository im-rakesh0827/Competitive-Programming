#include<iostream>
#include<math.h>
using namespace std;
int element(int arr[], int n, int key){
    int num;
    for(int i=0; i<=key; i++){
        num=arr[key];
    }
    return num;
}
int main(){
    int n, key;
    cin>>n;
    cin>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<element(arr, n, key);
    return 0;
}