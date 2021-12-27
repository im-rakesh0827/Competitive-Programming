#include<iostream>
using namespace std;
int linearSearch(int a[], int n, int key){
    // for(int i=0; i<n; i++){
    //     if(key==a[i]){
    //         key=i;
    //     }
    // }

    int i=0;

    // while (i<n){
    //     if(key==a[i]){
    //         key=i;
    //     }
    //     i++;
    // }

    do{
        if(key==a[i]){
            key=i;
        }
        i++;
    } while (i<n);
    
    return key;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    int i=0;
    // while(i<n){
    //     cin>>a[i];
    //     i++;
    // }
    do{
        cin>>a[i];
        i++;
    }while (i<n);
    
    int key;
    cin>>key;
    cout<<linearSearch(a, n, key)<<endl;
    return 0;
}