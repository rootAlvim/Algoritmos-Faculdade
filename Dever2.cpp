#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define ALTURA 20
#define LARGURA 20

void MoveEsquerda(int *x);
void MoveDireita(int *x);
void MoveCima(int *y);
void MoveBaixo(int *y);
void ImprimeMapa(int px, int py, char robo);
void LimiteTabuleiro(int *px, int *py);

int main(void)
{
    int px, py;
    char ordem;
    int continua = 1;
    char robo = '@'; // formato inicial

    srand(time(0));
    px = rand() % LARGURA;
    py = rand() % ALTURA;

    ImprimeMapa(px, py, robo);

    while (continua)
    {
        ordem = getchar();
        system("clear"); // use "cls" se estiver no Windows

        switch (ordem)
        {
        case 'a': case 'A':
            MoveEsquerda(&px);
            break;
        case 'd': case 'D':
            MoveDireita(&px);
            break;
        case 'w': case 'W':
            MoveCima(&py);
            break;
        case 's': case 'S':
            MoveBaixo(&py);
            break;
        case 'm': case 'M':
            robo = (robo == '@') ? '$' : '@';
            break;
        case 'q': case 'Q':
            continua = 0;
            break;
        default:
            cout << "Comando invalido!" << endl;
            break;
        }

        LimiteTabuleiro(&px, &py);
        ImprimeMapa(px, py, robo);
        cout << "Posicao: (" << px << ", " << py << ")" << endl;
    }

    return 0;
}

void ImprimeMapa(int px, int py, char robo)
{
    for (int y = 0; y < ALTURA; y++)
    {
        for (int x = 0; x < LARGURA; x++)
        {
            if (px == x && py == y)
                cout << robo;
            else
                cout << '+';
        }
        cout << endl;
    }
}

void LimiteTabuleiro(int *px, int *py)
{
    if (*px < 0)
        *px = 0;
    else if (*px >= LARGURA)
        *px = LARGURA - 1;

    if (*py < 0)
        *py = 0;
    else if (*py >= ALTURA)
        *py = ALTURA - 1;
}

void MoveEsquerda(int *x)
{
    (*x)--;
}

void MoveDireita(int *x)
{
    (*x)++;
}

void MoveCima(int *y)
{
    (*y)--;
}

void MoveBaixo(int *y)
{
    (*y)++;
}