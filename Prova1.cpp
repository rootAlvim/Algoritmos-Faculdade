/*
1. Faça um algoritmo recursivo que resolva o problema da Multiplicação de dois números naturais,
através de somas sucessivas (Ex.: 6 ∗ 5 = 5 + 5 + 5 + 5 + 5 + 5).
2. Cálculo de 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (nˆ2+1)/ (n+3).
3. Faça um algoritmo recurso para realizar uma Inversão de uma string. Exemplo: Aluisio -> oisiulA
4. Faça um algoritmo que calcule a área de um trapézio usando ponteiros. A função deve receber
como parâmetro calcArea(int *BMaior, int *BMenor, int *Altura). Fórmula é: Área = ((Base Maior
+ Base Menor) x Altura) / 2.
5. Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A
função deverá preencher os elementos de vetor com esse valor. Não utilize índices para percorrer
o vetor, apenas aritmética de ponteiros. Informe a complexidade do programa.
*/
#include <iostream>
#include <string>
using namespace std;
int multiplicar(int a, int b)
{
    if (a == 0)
        return 0;
    else
        return b + multiplicar(a - 1, b);
}

int main()
{
    int a, b;
    cout << "Digite um valor para A: ";
    cin >> a;
    cout << "Digite um valor para B: ";
    cin >> b;
    cout << "A multiplicação de " << a << " e " << b << " é " << multiplicar(a, b);
}
#include <iostream>
#include <cmath>
using namespace std;
double quest2(int n)
{
    if (n == 1)
        return double(1 * 1 + 1) / (1 + 3);
    else
        return double((n * n + 1) / (n + 3)) + quest2(n - 1);
}

int main()
{
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    cout << "Resultado da soma aproximado e: " << quest2(n) << endl;
}
#include <iostream>
#include <cmath>
using namespace std;
float calcArea(int *BMaior, int *BMenor, int *Altura)
{
    return ((*BMaior + *BMenor) * *Altura) / 2;
}
int main()
{

    int baseMa, baseMe, Altura;
    cout << "Base maior: ";
    cin >> baseMa;
    cout << "Base menor: ";
    cin >> baseMe;
    cout << "Altura: ";
    cin >> Altura;
    cout << "Area do trapezio: " << calcArea(&baseMa, &baseMe, &Altura) << endl;
}
#include <iostream>
#include <cmath>
using namespace std;
void preencherVetor(int *vet, int valor)
{
    int *ptr = vet;
    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) = valor;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << *(ptr + j) << " ";
    }
}
int main()
{
    int valor;

    cout << "Valor para preencher: ";
    cin >> valor;

    int vetor[5];
    preencherVetor(vetor, valor);
} /*Complexidade o(n) pq o processamento e proporcional ao tamanho do vetor, ou seja quanto maior o tamanho mais processamento e visse e versa*/