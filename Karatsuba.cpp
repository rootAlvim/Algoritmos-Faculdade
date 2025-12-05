#include <iostream>
#include <cmath>
#include <string>
using namespace std;
long long karatsuba(long x, long y)
{
   if (x < 10 || y < 10) // caso base
        return x * y;

    // transforma em string pra contar os dígitos
    string X = to_string(x);
    string Y = to_string(y);
    int n = max(X.length(), Y.length());
    int m = n / 2;
    return n;
}
int main()
{
    cout << "Valor " << karatsuba(2, 9) << endl;
}