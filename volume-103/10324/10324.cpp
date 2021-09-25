
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("..\\uva\\p_medium\\p10324\\p10324.in", "r", stdin);
    //freopen("..\\uva\\p_medium\\p10324\\p10324.out", "w", stdout);

    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    char s[1000005];

    int n, a, b, temp, t(1);
    bool valid;

    while (scanf("%s %d", s, &n) == 2) {
        printf("Case %d:\n", t);
        ++t;

        while (n--) {
            scanf("%d%d", &a, &b);
            if (b < a) {
                temp = a;
                a = b;
                b = temp;
            }

            valid = true;

            for (int i = a; i < b; ++i)
                if (s[i] != s[i + 1])
                    valid = false;

            if (valid)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}
