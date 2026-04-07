# include <bits/stdc++.h>
using namespace std;

int checkarmstrong(int n){
    int val = n;
    int x =0;
    while(n>0){
        int digit = n % 10;
        n = n / 10;
        x = x +(digit * digit * digit);
    }
    if(val == x) return true;
    else return false;


}
int main() {
  int n;
  if (cin >> n) {
    int x = checkarmstrong(n);
    if(x==1) cout<<"True";
    else cout<<"False";
  }

  return 0;
}