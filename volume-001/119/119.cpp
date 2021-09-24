
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("..\\uva\\p_medium\\p119\\p119.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    size_t T = 1;
    size_t N;
    while (cin >> N)
    {
        map<string, int> balance;
        vector<string> names;
        for (size_t i = 0; i < N; ++i)
        {
            string name;
            cin >> name;
            balance[name] = 0;
            names.push_back(name);
        }
        for (size_t i = 0; i < N; ++i)
        {
            string name;
            cin >> name;
            int spentMoney, nPeople;
            cin >> spentMoney >> nPeople;
            if (nPeople == 0)
                continue;
            int gift = spentMoney / nPeople;
            balance[name] -= gift * nPeople;
            for (size_t j = 0; j < nPeople; ++j)
            {
                cin >> name;
                balance[name] += gift;
            }
        }

        if (T++ > 1)
            cout << endl;
        for (size_t i = 0; i < N; ++i)
            cout << names[i]
                 << " "
                 << balance[names[i]]
                 << endl;
    }

    return 0;
}
