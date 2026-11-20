#include <stdio.h>

// TODO echanger les valeurs
// c1 prend la valeur de c2
// c2 prend la valeur de c1
void echanger(char * pC1, char * pC2 ) {
    char aux = 0;
    aux = *pC1 ;
    *pC1 = *pC2;
    *pC2 = aux;
}

int main() {
    // variables
    char c1 = 0;
    char c2 = 0;
    char aux = 0;

    printf("Donnez le 1er char : ");
    scanf("%c", &c1);

    printf("Donnez le 2eme char : ");
    scanf(" %c", &c2);

    echanger(&c1, &c2);

    printf("c1 = %c, c2 = %c", c1, c2);

    return 0;
}
