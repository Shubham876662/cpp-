# include <bits/stdc++.h>
using namespace std;

int god_bf(int m,int n){
    int x = 0;
    for(int i=1;i<=min(m,n);i++){
        if(n%i == 0 && m%i == 0){
            x=i;
        }
    }
    return x;
}

int god_optimal(int m,int n){
    while(n != 0){
        int remind = m%n;
        m = n;
        n = remind;
    }
    return m;
}

int main(){
    int m = 18;
    int n = 12;
    
    if(cin>>m && cin>>n){
        cout<<"Bruteforce method"<<endl;
        cout<<"the GOD is : "<<god_bf(m,n)<<endl;
        cout<<"optimal method"<<endl;
        cout<<"the GOD is : "<<god_optimal(m,n)<<endl;
    }
}