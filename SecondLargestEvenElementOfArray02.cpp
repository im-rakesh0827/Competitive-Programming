// #include "bits/stdc++.h"
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             // int k = sizeof(arr[i]);
//             // for(int i=1; i<k; i++){
//             //     int temp = arr[i];
//             //     int j=i-1;
//             //     while (arr[j]>temp && j>=0){
//             //         arr[j+1]=arr[j];
//             //         j--;
//             //     }
//             //     arr[j+1]=temp;
//             // }
//             // for(int i=0; i<k; i++){
//             //     cout<<arr[k-2]<<"\n";
//             //     break;
//             // }
//             // break;

//             int m = sizeof(arr[i]);
//             for(int i=1; i<m; i++){
//                 int temp = arr[i];
//                 int j=i-1;
//                 while(arr[j]>temp && j>=0){
//                     arr[j+1]=arr[j];
//                     j--;
//                 }
//                 arr[j+1]=temp;
//             }
//             for(int i=0; i<m; i++){
//                 cout<<arr[m-2]<<"\n";
//             }
//         }
//     }
//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            for(int i=n-1; i>=0; i--){
                if(arr[i]%2==0){
                    cout<<arr[i-1]<<"\n";
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
