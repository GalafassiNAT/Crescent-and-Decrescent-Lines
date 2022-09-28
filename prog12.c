#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Informe a quantidade de linhas: ");
    scanf(" %d", &n);
    for(int i = 1; i <= n; i++){
        printf("X");
        if(i == n){
            if(n <= 0){
                break;
            }
            printf("\n");
            i = 0;
            n--;
        }

    }

    return 0;
}