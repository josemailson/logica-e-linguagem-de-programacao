#include <stdio.h>

main()

{


float peso,valor;
int tipo,regiao,a;

 printf("Digite o peso da encomenda em kg\n");
 scanf("%f",&peso);

 printf("Digite o tipo de encomenda 1-sedex, 2-sedex 10 \n");
 scanf("%d",&tipo);

 printf("Digite a região 1- Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul\n");
 scanf("%d",&regiao);

 if(peso<=1)  {
              valor+=5;

              }
 else if(peso>1 && peso <=5)  {
              valor+=10;

              }

 else if(peso>5)  {
              valor+=15;

              }

 if(tipo==1){

      valor+=9;

             }
 else if(tipo==2){

      valor+=11;

             }

             if(regiao==1){

                 valor+=3;

                           }
                          else if(regiao==2){

                 valor+=2;

                           }
                           else if(regiao==3){

                 valor+=6;

                           }
                           else if(regiao==4){

                 valor+=5;

                           }   else if(regiao==5){

                 valor+=7;

                           }
printf("Valor da postagem igual a R$%.2f \n",valor);

}
