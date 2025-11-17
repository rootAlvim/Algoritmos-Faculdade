#include <iostream>
#include <cmath>
using namespace std;

void Questao1()
{
    int i = 10;
    float j = 9.4;
    char k = 'A';
    int *pont1 = &i;
    float *pont2 = &j;
    char *pont3 = &k;
    cout << "Valores antes da modificação:\n[" << i << "]\n[" << j << "]\n[" << k << "]" << endl;

    *pont1 = 2;
    *pont2 = 3.3;
    *pont3 = 'B';

    cout << "Valores depois da modificação:\n[" << i << "]\n[" << j << "]\n[" << k << "]" << endl;
}
void Questao2(int A, int B)
{

    int valor;
    valor = A + B;

    int *ponteiro;

    ponteiro = &valor;

    cout << "Valor da soma: " << *ponteiro << endl;
}
void Questao3()
{
    int vet[10];
    int *pont;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> vet[i];
        pont = &vet[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Posição do número  " << i + 1 << ": " << pont << endl;
    }
}
void Questao4()
{
    float vet[3][3];
    float *pont;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vet[i][j] = 2;
            pont = &vet[i][j];
            cout << pont << " ";
        }
        cout << endl;
    }
}
void Questao5()
{
    int vet[5];
    int *pont = vet;
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> *(pont + i);
    }
    cout << "Dobro dos números: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(pont + i) * 2 << " ";
    }
}
void Questao6()
{
    int vet[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> vet[i];
    }

    cout << "Endereço das posições pares: ";
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cout << &vet[i] << " ";
        }
    }
}
void Questao7()
{
    int a;
    int *b, *c, *d;
    cout << "Digite um número qualquer: ";
    cin >> a;
    b = &a;
    c = &a;
    d = &a;

    cout << "Valor de A duplicado: " << *b * 2 << endl;
    cout << "Valor de A triplicado: " << *c * 3 << endl;
    cout << "Valor de A quadruplicado: " << *d * 4 << endl;
}
void Questao8()
{

    int A, B, C, aux;

    cout << "Dê valores para A, B e C: \n";
    cin >> A;
    cin >> B;
    cin >> C;

    if (A == B && B == C)
    {
        cout << "1" << endl;
    }

    if (A != B || B != C)
    {
        cout << "0" << endl;
    }

    if (A > C)
    {
        aux = A;
        A = C;
        C = aux;
    }

    if (A > B)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if (B > C)
    {
        aux = B;
        B = C;
        C = aux;
    }

    cout << "Array ordenada: " << A << " " << B << " " << C << endl;
}
void Questao9(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}
void Questao10(float *vet, int n)
{
    int negativos = 0;

    cout << "Digite os valores para preencher o array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << i + 1 << "º Número: ";
        cin >> *vet;
        if (*vet < 0)
        {
            negativos += 1;
        }
        vet++;
    }
    cout << "Temos " << negativos << " números negativos." << endl;
}
void Questao11(int vet[], int n)
{
    int minimo, maximo;

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> vet[i];

        int *p = &vet[i]; // ponteiro para o elemento atual

        if (i == 0)
        {
            minimo = *p;
            maximo = *p;
        }
        else
        {
            if (*p < minimo)
                minimo = *p;
            if (*p > maximo)
                maximo = *p;
        }
    }

    cout << "Valor minimo: " << minimo << endl;
    cout << "Valor maximo: " << maximo << endl;
}
void Questao12(int *x1, int *x2, int n1, int n2)
{

    int cont12 = 0;

    for (int i = 0; i < 5; i++)
    {
        if (x1[i] == x2[i])
        {
            cont12++;
        }
        else
        {
            cont12 = cont12 + 2;
        }
    }

    int *vet12;

    vet12 = (int *)malloc(cont12 * sizeof(int));

    if (vet12)
    {
        cout << "Memória alocada!" << '\n';
        for (int i = 0; i < cont12; i++)
            vet12[i] = rand() % 100;
    }
    else
    {
        cout << "Erro de alocação!" << '\n';
    }

    int j = 0;
    int v1 = 0;
    int v2 = 0;

    for (int i = 0; i < 5; i++)
    {

        if (x1[v1] == x2[v2])
        {
            vet12[j] = x1[v1];
            j++;
            v1++,
                v2++;
        }
        if (x1[v1] < x2[v2])
        {
            vet12[j] = x1[v1];
            j++;
            v1++;
        }
        if (x2[v2] < x1[v1])
        {
            vet12[j] = x2[v2];
            j++;
            v2++;
        }

        if ((v1 == 6) && (v2 == 4))
        {
            vet12[6] = x2[4];
        }
    }

    cout << "O vetor organizado: ";
    for (int i = 0; i < cont12; i++)
    {
        cout << vet12[i] << " ";
    }

    cout << '\n';
}
void Questao13(int *x1, int *x2, int n1, int n2, int *qtd)
{

    int cont13 = 0;

    for (int i = 0; i < n1; i++)
    {
        if (x1[i] == x2[i])
        {
            cont13++;
        }
    }

    int *vet13;

    vet13 = (int *)malloc(cont13 * sizeof(int));

    if (vet13)
    {
        cout << "Memória alocada!" << '\n';
        for (int i = 0; i < cont13; i++)
            vet13[i] = rand() % 100;
    }
    else
    {
        cout << "Erro de alocação!" << '\n';
    }

    int j = 0;

    for (int i = 0; i < n2; i++)
    {

        if (x1[i] == x2[i])
        {
            vet13[j] = x1[i];
            j++;
        }
    }

    cout << '\n';

    cout << "O vetor intercecção é: ";
    for (int i = 0; i < cont13; i++)
    {
        cout << vet13[i] << " ";
    }

    cout << '\n';

    qtd = &cont13;
}
void Questao14(int *vet, int n)
{

    for (int i = 0; i < n; i++)
        cout << (vet[i]) << " ";

    cout << '\n';
}
int main()
{
    // Questao1();
    // Questao2(2,2);
    // Questao3();
    // Questao4();
    // Questao5();
    // Questao6();
    // Questao7();
    // Questao8();
    // Questao9(12.2);

    // float vet[4];
    //  Questao10(vet, 4);

    // int vet[3];
    // Questao11(vet, 3);

    /*int vetx1[] = {1, 3, 5, 6, 7};
    int vetx2[] = {1, 3, 4, 6, 8};
    int tamx1 = sizeof vetx1/sizeof vetx1[0];
    int tamx2 = sizeof vetx2/sizeof vetx2[0];
    int *px1 = &vetx1[0];
    int *px2 = &vetx2[0];
    Questao12(px1, px2, tamx1, tamx2);*/

    /*int vet1[5] = {1, 2, 3, 4, 5};
    int vet2[5] = {1, 0, 3, 7, 5};
    int qtdIntersecao;  // vai armazenar o resultado

    Questao13(vet1, vet2, 5, 5, &qtdIntersecao);  // passa os endereços
    cout << "Quantidade de elementos iguais: " << qtdIntersecao << endl;*/

    /*    int n14;
    int *vet14;

    cout << "Digite o tamano do vetor: ";
    cin >> n14;

    vet14 =  (int *) malloc(n14 * sizeof(int));

    if(vet14){
        cout << "Memória alocada!" << '\n';
        for(int i = 0; i < n14; i++)
            vet14[i] = rand() % 100;
    }
    else{
        cout << "Erro de alocação!" << '\n';
    }

    Questao14(vet14, n14);*/
    /*Questao 15 e 16
os valores finais são:
i = 35
j = 68

O código cria dinamicamente uma matriz de inteiros 2x2, a preenche com a soma de seus índices de linha e coluna (`i+j`), imprime o resultado e depois libera a memória alocada.
A saída impressa na tela é:
0	1	1	2
*/
}