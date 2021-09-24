///SOLUCION FUERZA BRUTA Time 0.250 Rank 15847

#include <bits/stdc++.h>

using namespace std;

#define swap(x, y) (x) ^= (y) ^= (x) ^= (y)
#define FOR(i, L, U)		for(int i=L; i<=U; i++)
#define EPS 1e-9

#define MAX 1000000

int main() {
    //freopen("..\\main.in", "r", stdin);
    //freopen("..\\main.out", "w", stdout);

    int i;
    int prev, next, up, low;
    unsigned int maxLen, n, len;

    while(cin >> low >> up) {
        prev = low;		next = up;
        maxLen = 0;
        if(up < low) swap(low, up);

        for(i=low; i<=up; i++) {
            len = 0;
            n = i;

            while(n != 1) {
                n % 2 == 0 ? n /= 2 : n = 3*n+1;
                len++;
            }
            if(len > maxLen) maxLen = len;
        }

        cout << prev << " " << next << " " << maxLen+1 << "\n";
    }

    return 0;

    return 0;
}
