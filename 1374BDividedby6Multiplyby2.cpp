#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, n2, n3, contador = 0, contador2 = 0;
        cin >> n;

        if(n == 1){
            cout << "0";
        }

        if(n == 3){
            cout << "2";
        }

        if(n % 6 == 0){

            while (n % 6 == 0){
                n2 = n / 6;

                if(n2 % 6 != 0){
                    n2 = n2 * 2;
                    contador2 ++;
                }

                contador ++;
            }

            cout << contador+contador2;

        }
        else
            cout << "-1";

        
    }
}