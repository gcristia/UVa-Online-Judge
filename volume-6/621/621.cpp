
#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("..\\uva\\p_easy\\p621\\p621.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;

    while (N--) {
        string S;

        cin >> S;

        if (S == "1" || S == "4" || S == "78") {
            cout << "+\n";
            continue;
        }
        int L = S.length() - 1;

        if (S[L - 1] == '3' && S[L] == '5') {
            cout << "-\n";
            continue;
        }

        if (S[0] == '9' && S[L] == '4') {
            cout << "*\n";
            continue;
        }

        if (S[0] == '1' && S[1] == '9' && S[2] == '0')
            cout << "?\n";

    }
    return 0;
}
