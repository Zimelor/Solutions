/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: mia_ortizma
 * Time: 2021-04-30 09:33:58
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int N_MAX = 1e5 + 1000;
ll Wi[N_MAX];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    ll N, W, Wr;
    cin >> N >> W >> Wr;
    ll VAL;
    bool ok = Wr >= W;
    for (int i = 0; i < N; ++i) {
      cin >> VAL;
      if (!ok) {
        Wi[VAL]++;
        if (Wi[VAL] == 2) {
          Wr += VAL * 2;
          Wi[VAL] = 0;
        }
        ok = Wr >= W;
      }
    }
    if (ok) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
    for (int i = 0; i < N_MAX; ++i) {
      Wi[i] = 0;
    }
  }
  return 0;
}