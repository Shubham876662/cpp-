#include <iostream>
using namespace std;

int fin(int n){
    int count = 0;
    int arr[]={1,2,5,2,3,6,2,5,2,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(n == arr[i]){
            count = count + 1;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"enter number : "<<endl;
    cin>>n;
    int val = fin(n);
    cout<<"The number "<<n<<" occured "<<val<<" times"<<endl;

}