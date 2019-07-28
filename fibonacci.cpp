#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector <int> fibonacci(n + 1);
    
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    
    for (int i = 2; i <= n; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    
    cout << fibonacci[n] << endl;
}

