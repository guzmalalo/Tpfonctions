#include <stdio.h>

int main() {
    // variables
    char c1 = 0;
    char c2 = 0;
    char aux = 0;

    printf("Donnez le 1er char : ");
    scanf("%c", &c1);

    printf("Donnez le 2eme char : ");
    scanf(" %c", &c2);

    // TODO echanger les valeurs
    // c1 prend la valeur de c2
    // c2 prend la valeur de c1
    aux = c1;
    c1 = c2;
    c2 = aux;

    printf("c1 = %c, c2 = %c", c1, c2);

    return 0;
}
