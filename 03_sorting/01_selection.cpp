
#include <iostream>
using namespace std;

void selection(int arr[] , int n){

    for(int i=0;i< n - 1 ; i++){
        int min=i;
        for(int j=i; j<n ;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; 
    }

}
int main()
{
    int arr[8]={5,6,1,2,4,3,8,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection(arr , n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;

    return 0;
}