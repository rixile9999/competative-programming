#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string chars;
    cin >> n;
    cin >> chars;
    transform(chars.begin(), chars.end(), chars.begin(), [](unsigned char c) {
        return tolower(c);}
    );
    set<char> s{};
    for (int i = 0; i < n; ++i) {
        auto ch = chars[i];
        s.insert(ch);
    }
    if (s.size() == 26)
        cout << "YES";
    else cout << "No";
}
