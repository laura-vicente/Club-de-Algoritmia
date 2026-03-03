#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];

        if (A[i] < 0){
            A[i] = A[i]*(-1);
        }
    }

    int min = A[0];
    for(int i = 1; i < N; i++){
        if(A[i] < min){
            min = A[i];
        }
    }

    cout << min << "\n";
}