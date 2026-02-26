#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long n, k, contador = 0, i = 1, valor = 0;

        cin >> n >> k;

        while (contador != ( k - (n-1) ))
        {

            if (i == 1)
            {
                if (contador == (i * n) - 1)
                {
                    valor = valor + 2;
                    i++;
                }
                else
                {
                    contador++;
                    valor++;
                }
            }
            else{
                if (contador == (i * n) - 1)
                {
                    i++;
                }
                else
                {
                    contador++;
                    valor++;
                }

            }
        }

        cout << contador << "\n" << valor;
    }
}