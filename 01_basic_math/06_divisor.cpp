# include <bits/stdc++.h>
using namespace std;

int divisr(int n){
    int x = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i == 0){
            x = i;
            cout<<x<<" ";
        }
    }
    cout<<n<<endl;
    return 0;
}

int main(){
    int n = 36;
    divisr(n);
}