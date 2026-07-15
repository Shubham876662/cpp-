#include <iostream>
using namespace std;

void insertion(int arr[] , int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(arr[j]<arr[j-1] && j>=1){
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
}

int main()
{
    int arr[8]={2,5,4,6,1,3,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr , n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}