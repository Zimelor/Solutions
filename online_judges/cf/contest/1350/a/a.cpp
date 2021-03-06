/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: mia_ortizma
 * Time: 2021-04-23 07:22:10
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
    ll N, K;
    cin >> N >> K;
    if (N % 2 == 0) {
      N = N + 2 * K;
    }
    else {
      ll factor = 0;
      for (ll i = 3; i * i <= N; i += 2) {
        if (N % i == 0) {
          factor = i;
          break;
        }
      }
      if (factor == 0) {
        factor = N;
      }
      N += factor;
      K--;
      N = N + 2 * K;
    }
    cout << N << "\n";
  }
  return 0;
}
