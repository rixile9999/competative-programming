#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    const int MAX_N = 100000;
    // count numbers
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int key;
        map<int, int> mem{};
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            cin >> key;
            ++mem[key];
        }
        vector<int> values{};
        transform(begin(mem), end(mem), back_inserter(values), [](auto elem) { return elem.second;});
        sort(begin(values), end(values), [](auto a, auto b){return a < b;});
        int answer = values.size();
        for (auto i: values) {
            if (i <= k) {
                k -= i;
                --answer;
            } else {
                break;
            }
        }
        if (answer == 0) {
            answer = 1;
        }
        cout << answer << endl;
    }
}