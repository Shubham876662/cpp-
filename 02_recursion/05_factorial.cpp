#include<iostream>
using namespace std;


int numbers(int n) {
    // Base case: stop when i exceeds n
    if (n==1) {
        return 1;
    }

    return n * numbers(n - 1);
    return 0;
}

int main() {
    int n;
    cout << "return value of n : ";
    cin >> n;
    int res = numbers(n);
    cout<<res;
    return 0;
}