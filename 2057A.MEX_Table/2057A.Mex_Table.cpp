#include <iostream>
using namespace std;

int main() {
    int t, m, n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> m;
        int k = n < m ? m + 1 : n + 1;
        cout << k << endl;;
    }
}