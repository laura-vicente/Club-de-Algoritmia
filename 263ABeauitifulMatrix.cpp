#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[5][5];
    int renglones, columnas;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            cin >> a[i][j];

            if(a[i][j] == 1){
                renglones = i;
                columnas = j;
            }
        }
    }


    if(renglones == 2 && columnas == 2){
        cout << "0" << "\n";
    }
    else
    {
        int i = 0;

    while(renglones != 2){
        if (renglones < 2){
            renglones ++;
        }
        if (renglones > 2)
            renglones--;

        i++;
    }

    while(columnas != 2){
        if (columnas < 2){
            columnas ++;
        }
        if (columnas > 2)
            columnas--;

        i++;
    }

    cout << i << "\n";

    }
 
}