#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("..\\uva\\p272", "r", stdin);

    /*ios_base::sync_with_stdio(0);
      cin.tie(0);*/

    ios::sync_with_stdio(false);

    char cadena;
    bool flag = false;

    while (scanf("%c", &cadena) != EOF) {
        if (cadena == '"') {
            if (!flag) {
                printf("``");
            } else {
                printf("''");
            }
            flag = !flag;
        } else {
            printf("%c", cadena);
        }
    }

    return 0;
}