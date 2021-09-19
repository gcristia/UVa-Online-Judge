//SOLUTION DP  Time 0.010 Rank 1901
 
#include <bits/stdc++.h>

using namespace std;

#define swap(x, y) (x) ^= (y) ^= (x) ^= (y)
#define FOR(i, L, U)		for(int i=L; i<=U; i++)
#define EPS 1e-9

#define MAX 1000000

unsigned int DP[MAX-1];

void Process()
{
    unsigned int n, i, len;

    DP[1] = 1;

    for(i=2; i<MAX; i++) {
        n = i;  len = 0;
        while(1) {
            n % 2 == 0 ? n /= 2 : n = 3*n+1;
            len++;
            if(n < i) {  DP[i] = DP[n] + len;       break;   }
        }
    }
}

int main() {
    //freopen("..\\main.in", "r", stdin);
    //freopen("..\\main.out", "w", stdout);

    Process();

    int i;
    int prev, next, up, low;
    unsigned int maxLen;

    // cout << DP[10];

    while(cin >> low >> up) {
        prev = low;
        next = up;
        maxLen = 0;

        if(up < low) swap(low, up);

        for(i=low; i<=up; i++)
            if(DP[i] > maxLen) maxLen = DP[i];

        cout << prev << " " << next << " " << maxLen << "\n";
    }

} 