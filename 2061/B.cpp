#include <bits/stdc++.h>
#include <cstddef>
#include <functional>
using namespace std;

void solve(vector<size_t>& a) {
    sort(begin(a), end(a), greater<std::size_t>());
    for (auto i = begin(a); i + 1 != end(a); ++i) {
        size_t l1 = *i, l2 = *(i + 1);
        if (l1 == l2) {
            a.erase(i, i + 2);
            for (auto j = begin(a); j + 1 != end(a); ++j) {
                size_t long_l = *j, short_l = *(j + 1);
                if (long_l - short_l < 2 * l1) {
                    cout << l1 << " " << l1 << " " << long_l << " " << short_l << endl;
                    return;
                }
            }
            break;
        }
    }
    cout << -1 << endl;
    return;
}
int main() {
    size_t t, n, val;
    cin >> t;
    for (size_t i = 0; i < t; ++i) {
        cin >> n;
        vector<size_t> target{};
        for (auto j = 0; j < n; ++j) {
            cin >> val;
            target.push_back(val);
        }
        solve(target);
    }
}
