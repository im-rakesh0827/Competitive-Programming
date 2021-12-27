#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int arr[]= {1, 2, 3, 4, 5};
    int size_arr=5;
    for(int i=0; i<size_arr; i++){
        arr[i]=arr[i+2];
    }
    for(int i=0; i<size_arr; i++){
        arr[i+2]=arr[i];
    }
    return 0;
}