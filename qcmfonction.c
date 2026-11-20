#include <stdio.h>

void division(int a, int b, int* pn, int * pr) {

    *pr = a%b;
    *pn = a/b;

}

int main() {
    int a = 5;
    int b = 2;
    int r = 0; // reste
    int n = 0; // partie entiere

    division(a, b, &n, &r);

}
