#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001

int main() {
    int k, s, z;
    int ans=0;
    cin >> k >> s;
    for(int i=0; i<=k; i++) {
        for(int j=0; j<=k; j++) {
            z = s-i-j;
            if (z >= 0 && z <= k) ans ++;
        }
    }
    cout << ans << endl;
}
