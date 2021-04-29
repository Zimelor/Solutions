/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: mia_ortizma
 * Time: 2021-04-22 21:24:19
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int N_MAX = 110;
int arr[N_MAX];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    int N, K;
    cin >> N >> K;
    int q = K;
    for (int i = 0; i < N - 1; ++i) {
      cin >> arr[i];
      if (arr[i] > 0 && q > 0) {
        int mn = min(arr[i], q);
        arr[i] -= mn;
        q -= mn;
      }
    }
    cin >> arr[N - 1];
    arr[N - 1] += K - q;
    for (int i = 0; i < N; ++i) {
      cout << arr[i] << " ";
    }
    cout << "\n";

  }
  return 0;
}
