//Desenvolva em linguagem C, um programa que verifique se o n�mero digitado pelo usu�rio � positivo ou negativo. Se o n�mero de entrada for maior que zero, ent�o� positivo sen�o � um n�mero negativo Se o n�mero � zero, ent�o n�o � nem positivo nem negativo//
 
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



