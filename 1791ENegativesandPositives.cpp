#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n], contador = 0;

        long long suma = 0;
        long long suma2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] < 0)
            {
                contador++;
                a[i] = a[i] * -1;
            }

            suma = suma + a[i];

        }

        if (contador % 2 == 0)
        {
                cout << suma << "\n";
        }
        else
        {
            sort(a, a + n);

            a[0] = a[0] * -1;


            for(int i = 0; i < n; i++){

                suma2 = suma2 + a[i];
            }
            cout << suma2 << "\n";
        }
    }
}