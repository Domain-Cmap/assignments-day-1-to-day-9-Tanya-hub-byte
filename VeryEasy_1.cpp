#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    long long sum = static_cast<long long>(n) * (n + 1) / 2;
    cout << sum << endl; 
}
