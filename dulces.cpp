#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int dulces, dinero;

        cin >> dulces >> dinero;


        if (dulces <= dinero){

            cout << dulces << '\n';

        }
        else 
            cout << dinero << '\n';

    }
}