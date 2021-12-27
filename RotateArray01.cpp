#include "iostream"
using namespace std;
void reverse(int low, int high, int key){
    int key; cin>>key;
    int low = 0;
    int high = n-1;
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int rev(int )
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}