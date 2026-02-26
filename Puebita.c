#include <stdio.h>

int main(){

    char *key;

    char *palabras[3] = {"GATO", "CASA", "CAMION"};

    for(int i = 1; i <= 3; i++){


        key = *palabras[i];
        
        int j = i - 1;

        while((j > 0) && (*palabras[j] > key)){

            *palabras[j + 1] = *palabras[j];
            j = j-1;

        }

        *palabras[j +1] = key;

    }


    


}