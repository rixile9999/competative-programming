#include <bits/stdc++.h>
using namespace std;

int solve(int a1, int a2, int a4, int a5) {
    int max_num = 0;
    int a3[3] = {a1 + a2, a4 - a2, a5 - a4};
    auto count_cases = [=](int a3) {
        int count = 0;
        if (a1 + a2 == a3)
            ++count;
        if (a2 + a3 == a4)
            ++count;
        if (a3 + a4 == a5)
            ++count;
        return count;
    };
    for (auto x: a3) {
        auto val = count_cases(x);
        max_num = max_num < val ? val : max_num;
    }
    return max_num;
}
int main() {
    int t, a1, a2, a4, a5;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a1 >> a2 >> a4 >> a5;
        auto answer = solve(a1, a2, a4, a5);
        cout << answer << endl;
    }
}
