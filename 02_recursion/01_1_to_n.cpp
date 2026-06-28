#include<iostream>
using namespace std;

int numbers(int n, int i) {
    // Base case: stop when i exceeds n
    if (i > n) {
        return 0;
    }
    cout << i << endl;
    i = i + 1;
    numbers(n, i);
    return 0; // Added return statement
}

int main() {
    int i = 0;
    int n;
    cin >> n;
    numbers(n, i);
    return 0; // Added return statement
}