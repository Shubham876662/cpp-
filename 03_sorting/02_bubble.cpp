#include <iostream>
using namespace std;

void bubble(int arr[] , int n){
    for(int i=n-1;i>=1;i--){

        int didswap = 0;

        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                didswap = 1;
            }
        }

        if(didswap == 0){
            break;
        }

        // cout<<"runs"<<endl;
    }
}

int main()
{
    int arr[8]={8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble(arr , n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}