#include <bits/stdc++.h>
using namespace std;

int main(){

    long long L, G, p = 0, Derecha, Izquierda, ContadorD = 0, ContadorI = 0;
    int d = 0;

    cin >> L >> G;

    Derecha = L / 2;
    Izquierda = L / 2;

    while (G --){

        cin >> p >> d;

        if ((p > Derecha) && (d == 0)){
            Derecha = p;
        }

        if((p < Izquierda) && (d == 1)){
            Izquierda = p;
        }
    }


    Derecha = L - Izquierda;

    if (Derecha > ContadorI){

        cout << Derecha << "\n";
    }
    else
        cout << ContadorI << "\n";

}