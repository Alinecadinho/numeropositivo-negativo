//Desenvolva em linguagem C, um programa que verifique se o número digitado pelo usuário é positivo ou negativo. Se o número de entrada for maior que zero, entãoé positivo senão é um número negativo Se o número é zero, então não é nem positivo nem negativo//
 
#include <stdio.h>
 

main(){
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num > 0){ 
    printf("Numero e positivo"); 
    }
    else {
        if (num < 0){
            printf("Numero e negativo");
        }
        else{
            printf("Igual a zero!");
        }
    }
    return 0;
}



