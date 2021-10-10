#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen("..\\main.in", "r", stdin);
    //freopen("..\\main.out", "w", stdout);

    int NCOWS,NCARS,NSHOW;

    while(scanf("%d%d%d",&NCOWS,&NCARS,&NSHOW)!=EOF){

        printf("%.5lf\n",((double)NCARS * (NCOWS + NCARS - 1)) / ((NCOWS + NCARS) * (NCOWS + NCARS - NSHOW - 1)));
    }

    return 0;
}