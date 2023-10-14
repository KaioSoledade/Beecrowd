#include <stdio.h>
int main(){
    for(int x = 1; x <= 10; x++){
        if((x % 2) == 0){
            printf("Esse %d numero eh par\n", x);
        }
        if((x % 2) == 1){
            printf("Esse %d numero eh impar\n", x);
        };
    };
}
