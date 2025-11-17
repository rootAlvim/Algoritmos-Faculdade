#include <iostream>
using namespace std;

int mochilaRecursiva(int W, int peso[], int valor[], int n) {
    if (n == 0 || W == 0)
        return 0;

    if (peso[n - 1] > W)
        return mochilaRecursiva(W, peso, valor, n - 1);

    int incluiItem = valor[n - 1] + mochilaRecursiva(W - peso[n - 1], peso, valor, n - 1);
    int excluiItem = mochilaRecursiva(W, peso, valor, n - 1);

    return (incluiItem > excluiItem) ? incluiItem : excluiItem;
}

int main() {
    int peso[]  = {2, 3, 4, 5, 9};
    int valor[] = {3, 4, 8, 8, 10};
    int n = 5;
    int W = 20;

    int resultado = mochilaRecursiva(W, peso, valor, n);

    cout << "Valor máximo que pode ser carregado: " << resultado << endl;

    return 0;
}