//SOLUCION #1 TIME: 2910
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("..\\main.in", "r", stdin);
    //freopen("..\\main.out", "w", stdout);
    int T, r, input, i_ind, j_ind, max_val, case_val = 0;
    vector<int> vec;
    scanf("%d", &T);
    while (T--) {

        scanf("%d", &r);
        vec.clear();
        case_val++;

        vec.push_back(0);

        for (int i = 1; i < r; ++i) {
            scanf("%d", &input);
            vec.push_back(input);
        }

        max_val = INT_MIN;
        i_ind = j_ind = 0;
//        DP solution
        for (auto it = vec.begin() + 1; it != vec.end(); it++) {
            *it += *(it - 1);
        }

        for (int i = 0; i < r; i++) {
            for (int j = i + 1; j < r; j++) {
                if (max_val < (vec[j] - vec[i])) {
                    i_ind = i;
                    j_ind = j;
                    max_val = vec[j] - vec[i];
                } else if (max_val == (vec[j] - vec[i]) && (j - i) > (j_ind - i_ind)) {
                    i_ind = i;
                    j_ind = j;
                }
            }
        }

        if (max_val > 0)
            printf("The nicest part of route %d is between stops %d and %d\n", case_val, i_ind + 1, j_ind + 1);
        else printf("Route %d has no nice parts\n", case_val);

    }
} // return 0;


/*
 * //SOLUTION #2 TIME: 0.50
 #include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("..\\main.in", "r", stdin);
    //freopen("..\\main.out", "w", stdout);
    int test, N, curSum, curSI, curEI, MS, maxSI, maxEI, cs;
    cs = 1;
    int A[20005];
    scanf("%d", &test);
    while(test--){
        scanf("%d", &N);
        N--;
        for(int i = 1; i <= N; i++)
            scanf("%d", &A[i]);

        curSum = 0;
        curSI = 1;
        MS = INT_MIN;
        for(curEI = 1; curEI <= N; curEI++){
            curSum += A[curEI];
            if(curSum < 0){
                curSI = curEI + 1;
                curSum = 0;
            }
            if(curSum > MS || (curSum == MS && (maxEI-maxSI < curEI- curSI))){
                MS = curSum;
                maxSI = curSI;
                maxEI = curEI;
            }
        }
        if(MS > 0)printf("The nicest part of route %d is between stops %d and %d\n", cs++, maxSI, maxEI+1);
        else printf("Route %d has no nice parts\n", cs++);
    }
    return 0;
}
 * */