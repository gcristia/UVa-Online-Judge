
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("..\\uva\\p_medium\\p10919\\p10919.in", "r", stdin);
    //freopen("..\\uva\\p_medium\\p10919\\p10919.out", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, m;
    while (cin >> k, k > 0) {
        cin >> m;
        map<string, int> courses;
        for (int i = 0; i < k; ++i) {
            string course;
            cin >> course;
            ++courses[course];
        }
        bool graduate = true;
        for (int i = 0; i < m; ++i) {
            int c, r;
            cin >> c >> r;
            for (int j = 0; j < c; ++j) {
                string course;
                cin >> course;
                if (courses.find(course) != courses.end())
                    --r;
            }
            if (r > 0)
                graduate = false;
        }
        cout << (graduate ? "yes" : "no") << endl;
    }


    return 0;
}
