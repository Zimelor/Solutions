/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: mia_ortizma
 * Time: 2021-05-01 07:25:28
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;


const int N_MAX = 3000;
int N;
int arr[N_MAX][5];

int sub[32];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cin >> N;
  int A, B, C, D, E;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 1; j < 32; ++j) {
      int cur = 1e9 + 100;
      for (int k = 0; k < 5; ++k) {
        if ((1 << k) & j) {
          cur = min(cur, arr[i][k]);
        }
      }
      sub[j] = max(sub[j], cur);
    }
  }

  /*
  for (int i = 1; i < 32; ++i) {
    for (int k = 0; k < 5; ++k) {
      if ((1 << k) & i) {
        cout << 1;
      }
      else {
        cout << 0;
      }
    }
    cout << "\n";
    cout << sub[i] << "\n";
  }
  */

  int ans = 0;

  for (int i = 1; i < 32; ++i) {
    for (int j = i + 1; j < 32; ++j) {
      for (int k = j + 1; k < 32; ++k) {
        int a = sub[i];
        int b = sub[j];
        int c = sub[k];
        int x = min(a, min(b, c));
        int mask = i | j | k;
        if (mask == 31) {
          ans = max(ans, x);
        }
      }
    }
  }

  cout << ans;

  return 0;
}
