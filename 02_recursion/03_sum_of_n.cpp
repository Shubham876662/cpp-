#include<iostream>
using namespace std;


int numbers(int n, int sum) {
    // Base case: stop when i exceeds n
    if (n<0) {
        cout<<"The sum is "<<sum;
        return 0;
    }

    numbers(n-1,sum+n);
    return 0;
}

int main() {
    int n;
    cout << "return value of n : ";
    cin >> n;
    numbers(n, 0);
    return 0;
}