#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    cin >> n;

    if (n == 1) cout << n;
    else if (n < 4) cout << "NO SOLUTION";
    else if (n == 4) cout << "2 4 1 3";
    else {
        for (int i = 1; i <= n; i+=2) cout << i << ' ';
        
        for (int i = 2; i <= n; i += 2) {
            cout << i;
            if (i + 2 <= n) cout << ' ';
        }
    }
}