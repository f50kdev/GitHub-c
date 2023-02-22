#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    /*
      float PrecoActual , NovoPreco , Desconto;

            printf("Insira o seu valot\n");
            scanf("%f" , &PrecoActual);

            NovoPreco = PrecoActual - (PrecoActual * (10.0/100));
           

            printf(" O valor a pagar : %0.f.\n" , NovoPreco);
    
    
    */

          float imc , peso ,altura;
          printf("\n insira a sua peso\n");
          scanf("%f" ,  &peso);

            printf("\n Insira a sua altura \n");
            scanf("%f" , &altura);

            imc = (peso/altura);
             printf(" seu peso %f" , peso);
             printf("Sua altura %f" , altura);
            printf("Seu IMC e de : %f " ,  imc) ;




    return 0;
}