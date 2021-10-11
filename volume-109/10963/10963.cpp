
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("..\\uva\\p_easy\\p10963\\p10963.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int tc, n, up, down;

    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &n);

        bool yes = true;
        scanf("%d %d", &up, &down);
        int d = up - down;

        for (int i = 0; i < n - 1; i++) {
            scanf("%d %d", &up, &down);
            if (d != up - down)
                yes = false;
        }

        if (yes)
            printf("yes\n");
        else
            printf("no\n");

        if (tc)
            printf("\n");
    }

    return 0;
}
