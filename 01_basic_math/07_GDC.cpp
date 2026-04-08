# include <bits/stdc++.h>
using namespace std;

int divisr(int m,int n){
    int x = 0;
    for(int i=1;i<=min(m,n);i++){
        if(n%i == 0 && m%i == 0){
            x=i;
        }
    }
    cout<<"The Greatest divisor factor is : "<<x<<endl;
    return 0;
}

int main(){
    int m ;
    int n ;
    if(cin>>m && cin>>n){
        divisr(m,n);
    }
    

    
}