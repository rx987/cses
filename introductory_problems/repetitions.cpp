#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  string lks;
  cin >> lks;
  int count = 1, ans = 1;
  for (int i = 0; i < lks.length() - 1; i++) {
    if (lks[i] == lks[i + 1])
      count++;
    else
      count = 1;
    ans = max(ans, count);
  }
  cout << ans << "\n";
  return 0;
}
