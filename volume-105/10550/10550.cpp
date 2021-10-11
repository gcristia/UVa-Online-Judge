#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("..\\uva\\p10550.in", "r", stdin);

    ios::sync_with_stdio(false);

    int dial, a, b, c;

    while (scanf("%d %d %d %d", &dial, &a, &b, &c), (dial || a || b || c)) {
        int one_step,two_step,three_step;
        dial<a ? one_step = 40 + dial - a : one_step = dial-a;
        b<a? two_step = 40 + b - a : two_step = b - a;
        b<c ? three_step = 40 + b - c: three_step = b - c;

        int number_of_degrees = 1080 + 9*(one_step + two_step + three_step);

        printf("%d\n", number_of_degrees);
    }

    return 0;
}
