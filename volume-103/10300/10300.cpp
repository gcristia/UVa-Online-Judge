
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("..\\uva\\p_easy\\p10300\\p10300.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int TC, a, n, p, f;

    scanf("%d", &TC);

    while (TC--) {
        int ans = 0;
        scanf("%d", &f);
        for (int i = 0; i < f; i++) {
            scanf("%d %d %d", &a, &n, &p);
            ans += a * p;
        }
        printf("%d\n", ans);
    }

    return 0;
}
