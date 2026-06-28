#include<iostream>
using namespace std;

int numbers(int n, int i) {
    // Base case: stop when i exceeds n
    if (i == 0) {
        return 0;
    }
    cout << i << endl;
    i = i - 1;
    numbers(n, i);
    return 0; // Added return statement
}

int main() {
    int n;
    cout<<"return value of n : ";
    cin >> n;
    int i=n;
    numbers(n, i);
    return 0; // Added return statement
}
