//C++
#include <bits/stdc++.h>

//C
//#include <stdio.h>
//#include <string.h> (strlen)
//#include <cstdio>

//Quitar para C
// using namespace std;

int main() {

    freopen("..\\in", "r", stdin);
    freopen("..\\out", "w", stdout);

    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);

        int tc, w,h;

        scanf("%d",&tc);
        while(tc--){
            scanf("%d %d",&w,&h);
            printf("%d\n",(w/3)*(h/3));
        }

        return 0;
}
