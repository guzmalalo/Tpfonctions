#include <stdio.h> // fonctions entrée / sortie

// Déclaration et définition de la procedure
// prototype : void afficherSolde(float)
void afficherSolde(float quantite) {
    printf("Votre solde est %.2f EUR\n", quantite);
}

int main (void) {
    // solde
    float solde = 100.0f;
    int  choix  = 0;

    do {
        // affichage menu
        printf(" --- Bienvenu à la banque ECE --- \n");
        printf(" 1.- Afficher solde \n");
        printf(" 2.- Faire un depot\n");
        printf(" 3.- Retirer de l'argent \n");
        printf(" 4.- Sortir \n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                // on appel la procedure afficherSolde
                afficherSolde(solde);
                break;
            case 2:
                printf("TODO: depot\n");
                break;
            case 3:
                printf("TODO: retrait\n");
                break;
            case 4:
                printf("TODO: sortir\n");
                break;
            default:
                printf("Erreur: choix inconnu\n");
                break;
        }
    }while(choix != 4);

    return 0;
}