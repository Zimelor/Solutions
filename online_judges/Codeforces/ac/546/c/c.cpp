#include<bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
map<pll, bool> vis;
long long a, b;
int n, k, tmp, frontA, frontB, fights;
bool found;

long long hash_(queue<int> X) {
  long long ans = 0, pow_ = 1;
  while (X.size()) {
    ans += X.front() * pow_;
    X.pop();
    pow_ *= 11;
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  
  cin >> n;
  
  queue<int> A, B;

  for (int i = 0; i < 2; ++i) {
    cin >> k;
    for (int j = 0; j < k; ++j) {
      cin >> tmp;
      if (i == 0)
        A.push(tmp);
      else
        B.push(tmp);
    }
  }

  while (!A.empty() && !B.empty()) {

    a = hash_(A), b = hash_(B);
    //cout << A.size() << ' ' << B.size() << '\n'; 
    pll X{min(a, b), max(a, b)};
    if (vis[X] == true) {
      found = true;
      break;
    }
   
   frontA = A.front(), frontB = B.front();
   A.pop(), B.pop();

   if ( frontA > frontB ) {
    A.push(frontB);
    A.push(frontA);
   } else {
    B.push(frontA);
    B.push(frontB);
   }

    vis[X] = true;
    ++fights;
  }

  
  if (!found) {
    cout << fights << ' ';
    if (A.size())
      cout << 1;
    else
      cout << 2;
  } else {
    cout << -1;
  }

  return 0;
}
