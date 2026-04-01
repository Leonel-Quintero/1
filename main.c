#include <stdio.h>

void primero (int n1);
void segundo (int n2);
void iguales ();

int main(){
    int a, b;

}
void primero(int n1) {
    printf("El primero (%d) es el mayor.\n", n1);
}

void segundo(int n2) {
    printf("El segundo (%d) es el mayor.\n", n2);
}

void iguales() {
    printf("Ambos numeros son iguales.\n");










    if (a > b) {
        primero(a);
    } else if (b > a) {
        segundo(b);
    } else {
        iguales();
    }
}