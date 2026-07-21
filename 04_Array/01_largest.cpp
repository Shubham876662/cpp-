#include <iostream>
using namespace std;

void largest(int arr[] , int n){
    int lar = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>lar) lar = arr[i];
    }
    cout<<"the largest elemet is "<<lar<<endl;
}

void second_largest(int arr[] , int n){
    int lar = 0;
    int seclar = -1;

    for(int i=0;i<n;i++){
        if(arr[i]>lar) lar = arr[i];
    }


    for(int i=0;i<n;i++){
        if(arr[i]>seclar && arr[i]!= lar) {
            seclar = arr[i];
        }
    }
    cout<<"the second largest elemet is "<<seclar<<endl;
}

int secondsmallest(int arr[] , int n){
    int smallest = arr[0];
    int secsmall = INT8_MAX;
    for(int i = 0; i<n ; i++){
        if(arr[i]<smallest) smallest = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<secsmall && arr[i] != smallest) secsmall = arr[i];
    }
    cout<<"second smallest is "<<secsmall<<endl;
}



int main(){
    int arr[5]={5,1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    largest(arr , n);
    second_largest(arr , n);
    secondsmallest(arr , n);
    
}