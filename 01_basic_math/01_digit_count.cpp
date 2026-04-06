
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int extract(int n){
    int cnt=0;
    cout<<"The extracted reverse numbers are : ";
    while(n>0){
        cnt = cnt + 1;
        int digit = n%10;
        n = n/10;
        cout<<digit<<" ";
        
    }
    cout<<endl;
    cout<<"The total count of numbers are : "<<cnt<<endl;
    return 0;
}

int main(){
    int n=536552;
    extract(n);
}