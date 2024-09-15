#include<stdio.h>

int main ()
{

    int Valor1, RestoA, RestoB, RestoC, Maior_numero;
    int Valor2, RestoX, RestoY, RestoZ, Maior_numero2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &Valor1);
        
    printf("Digite o segundo valor: ");
    scanf("%d", &Valor2);

    if ((Valor1<=0 && Valor1>999) && (Valor2<=0 && Valor2>999)) 
    {
        printf("Valor invalido, digite um valor entre 1 e 999");
    }
     
 //if (Valor2<=0 && Valor2>999) {
        //printf("Valor invalido, digite um valor entre 1 e 999");}    
    
    
    RestoA = Valor1 / 100;
    RestoB = Valor1%100 / 10;
    RestoC = Valor1%10;

    RestoX = Valor2 / 100;
    RestoY = Valor2%100 / 10;
    RestoZ = Valor2%10; 
    

    //comparando o primeiro valor

    if ((RestoA>RestoB) && (RestoA>RestoC)) {
        (Maior_numero = RestoA);
        
    } 
    else  {
        if ((RestoB>RestoA) && (RestoB>RestoC)){
            (Maior_numero = RestoB);
        
        }
    }
    if ((RestoC>RestoB) && (RestoC>RestoA)) {
        (Maior_numero = RestoC);

    }   

     //comparando o segundo valor

    if ((RestoX>RestoY) && (RestoX>RestoZ)) {
        (Maior_numero2 = RestoX);

    } 
    else  {
        if ((RestoY>RestoX) && (RestoY>RestoZ)){
            (Maior_numero2 = RestoY);
        }
    }
    if ((RestoZ>RestoX) && (RestoZ>RestoY)) {
        (Maior_numero2 = RestoZ);

         printf("A diferenca entre os maiores algarismos e " "%d", Maior_numero - Maior_numero2);
    }
    
    

    


    

}   

