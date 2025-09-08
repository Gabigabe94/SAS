#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};

float calculerAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {

    struct Rectangle rect;

    printf("\nEntrez la longueur du rectangle : ");
    scanf("%f", &rect.longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &rect.largeur);

    float aire = calculerAire(rect);
    printf("L'aire du rectangle est : %.2f\n", aire);

    return 0;
}
