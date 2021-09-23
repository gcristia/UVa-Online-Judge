#include <bits/stdc++.h> // import todas las librerias

using namespace std;

int row[8], TC, a, b, lineCounter;       // es aceptable usar variables globales

bool place(int r, int c) {
    for (int prev = 0; prev < c; prev++) // comprobar reinas ya colocadas
        if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c)))
            return false; // comparten misma fila o diagonal -> inviable
    return true;
}

void backtrack(int c) {
    if (c == 8 && row[b] == a) {    // solucion candidata, (a,b) tiene reina
        printf("%2d      %d", ++lineCounter, row[0] + 1);
        for (int j = 1; j < 8; j++) printf(" %d", row[j] + 1);
        printf("\n");
    }
    for (int r = 0; r < 8; r++)  // probar en todas las filas posibles
        if (place(r, c)) {  // si se puede colocar en reina en esta fila y columna
            row[c] = r;           // colocar esta reina
            backtrack(c + 1);  // seguir recursion
        }
}


int main() {
    //freopen("..\\main.in", "r", stdin);
    //freopen("..\\main.out", "w", stdout);
    scanf("%d", &TC);
    while (TC--) {
        scanf("%d %d", &a, &b);
        a--;                 //cambio a indexacion desde 0
        b--;
        memset(row, 0, sizeof row);
        lineCounter = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        backtrack(0);   // genera las 8! soluciones candidatas posibles
        if (TC) printf("\n");
    }
} // return 0;
