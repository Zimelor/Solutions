/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: mia_ortizma
 * Time: 2021-04-16 09:35:02
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int N_MAX = 2001;
ll vec[N_MAX];
ll dp[N_MAX][N_MAX];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> vec[i];
  }
  sort(vec, vec + N);
  for (int i = 0; i < N; ++i) {
    for (int j = i - 1; j >= 0; --j) {
      dp[j][i] = vec[i] - vec[j] + min(dp[j + 1][i], dp[j][i - 1]);
    }
  }

  //cout << dp[0][1] << " " << dp[1][2] << "\n";

  cout << dp[0][N - 1];

  return 0;
}
