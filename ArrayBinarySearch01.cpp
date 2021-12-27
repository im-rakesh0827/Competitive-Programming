#include<iostream>
using namespace std;
int binarySearch(int a[], int n, int key){
    cin>>key;
    int l=0, h=n;

    // while(l<=h){
    //     int mid=(l+h)/2;
    //     if(key==a[mid]){
    //         return mid;
    //     }else if(key>a[mid]){
    //         l=mid+1;
    //     }else{
    //         h=mid-1;
    //     }
    // }

    do
    {
        int mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
            break;
        }else if (key>a[mid]){
            l=mid+1;
        }else{
            h=mid-1;
        }
    } while (l<=h);
    
    return -1;
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
    } while (i<n);
    
    int key;
    cout<<binarySearch(a, n, key)<<endl;
    return 0;
}