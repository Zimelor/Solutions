/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: mia_ortizma
 * Time: 2021-04-18 20:02:13
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int tmp, ans = 0;
    for (int i = 0; i < N; ++i) {
      cin >> tmp;
      if (tmp == 1 || tmp == 3) {
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
