#include <bits/stdc++.h>
using namespace std;
inline bool solve(int i) { return i % 2 == 0 && i >= 4; }

int main() {
  int i;
  cin >> i;
  auto result = solve(i);
  if (result)
    cout << "YES";
  else
    cout << "No";
}

