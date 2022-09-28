#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Informe a quantidade de linhas: ");
    scanf(" %d", &n);
    int j = n;
    n = 1;
    for(int i = 1; i <= n; i++){
        printf("X");
        if(i == n){
            if(j <= 1){
                break;
            }
            printf("\n");
            i = 0;
            j--;
            n++;
        }

    }
    printf("\n");

    return 0;
}