#include<iostream>
#include<stdalign.h>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 4, 5};
    int size=5;
    int evenCount=0, oddCount=0;
    for(int i=0; i<=size-1; i++){
        if(a[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    cout<<oddCount<<" "<<evenCount<<endl;
    return 0;
}
