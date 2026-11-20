#include <stdio.h>



int getPlusGrand(int x, int y) {
    int m = 0;

    if (x>y) {
        m = x ;
    } else {
        m = y;
    }
    // m = (a>b)? a:b;

    return m;
}
void afficherPlusGrand(int m) {
    printf("Le plus grand est %d", m);
}

// fonction
int getEntier(void) {
    int x =0;
    printf("Donnez le nombre : ");
    scanf("%d", &x);

    return x;
}

// procedure
void saisirEntier(int* x) {
    printf("Donnez le nombre : ");
    scanf("%d", x);
}

int main(void) {
    int a = 0;
    int b = 0;
    int m = 0; // le plus grand

    a = getEntier();
    saisirEntier(&b);

    m = getPlusGrand(a,b);

    afficherPlusGrand(m);

    return 0;
}
