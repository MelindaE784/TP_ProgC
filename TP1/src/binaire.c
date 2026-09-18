#include <stdio.h>

void afficher_binaire(unsigned int nombre) {
    for (int bit = 31; bit >= 0; bit--) {
        unsigned int masque = 1u << bit;
        if (nombre & masque) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int i = 0; i < taille; i++) {
        printf("%u en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}