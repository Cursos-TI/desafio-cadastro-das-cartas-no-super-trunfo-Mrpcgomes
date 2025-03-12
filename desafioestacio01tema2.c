#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
   //// criando nome para os tipos de dados que serão usados no código 

   char codigo01[2];
   char estado01[4];
   char nomeCidade01[50];
   float populacao01;
   float area01;
   float pib01;
   int pontos_turisticos01;
   float densidade01;
   float pibpercapta1;

   printf ("cadastro da carta 1 \n\n"); //informação clara sobre os dados que o usúario irá inserir 
   printf("\n");
    //começo da inserção de dados da carta 1 pelo usúario 

   printf("Digite o codigo da carta:-exemplo A01- \n\n"); 
    scanf("%s", codigo01);
    printf("\n");

    printf("Digite o nome do estado: - caracter de A-H -");
     scanf("%s", estado01);
     printf("\n");

   printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade01);
    printf("\n");
   
   printf ("insira a população da cidade A1:\n");
   scanf ("%f", &populacao01);
   printf("\n");
   

   printf ("insira a Área da cidade A1:");
   scanf ("%f", &area01);
   printf("\n");
   

   printf ("insira o PIB da cidade A1:");
   scanf ("%f", &pib01);
   printf("\n");
  

   printf ("insira o nº de pontos turísticos da A1:");
   scanf ("%d", &pontos_turisticos01);
   printf("\n");

   
   pibpercapta1 = (pib01/populacao01);            //feito o calculo para determinar o pib per capta e densidade

   densidade01 = (float) populacao01/area01;

   printf("\n\n\n");




   
   
   
    /////////////////////////////////////////////////// inserção dos dados da carta 2

    //// criando nome para os tipos de dados que serão usados no código carta 2

    char codigo02[2];
    char estado02[4];
    char nomeCidade02[50];
    float populacao02;
    float area02;
    float pib02;
    int pontos_turisticos02;
    float densidade02;
    float pibpercapta2;
 
    printf ("cadastro da carta 2 \n"); //informação clara sobre os dados que o usúario irá inserir 
    printf("\n\n");

     //começo da inserção de dados da carta 2 pelo usúario 
 
    printf("Digite o codigo da carta:-exemplo A02-"); 
     scanf("%s", codigo02);
     printf("\n");
 
     printf("Digite o nome do estado: - caracter de A-H -");
      scanf("%s", estado02);
      printf("\n");
 
    printf("Digite o nome da cidade: ");
     scanf("%s", nomeCidade02);
     printf("\n");

    printf ("insira a população da cidade carta 2:\n");
    scanf ("%f", &populacao02);
    printf("\n");

    
 
    printf ("insira a Área da cidade carta 2:\n"); 
    scanf ("%f", &area02);
    printf("\n");

    
 
    printf ("insira o PIB da cidade carta 2:");
    scanf ("%f", &pib02);
    printf("\n");

   
 
    printf ("insira o nº de pontos turísticos da carta 2:");
    scanf ("%d", &pontos_turisticos02);
    printf("\n\n");

    
   pibpercapta2 = (pib02/populacao01);          //feito o calculo para determinar o pib per capta e densidade carta 2 

   densidade02 = (float) populacao02/area02;


    printf ("Dados das cartas super trunfo \n");
    printf ("\n");


      //////Exibição dos dados da carta 1 fornecidas pelo usúario
   printf ("Informações carta 1 do supertrunfo \n\n\n"); //tema ao que será exibdido ao usúario (infos)

   printf ("O código da carta 1 é: %s \n", codigo01);
   printf("\n");

   printf ("A inicial do estado é: %s \n", estado01);
   printf("\n");

   printf ("O nome da cidade é: %s \n", nomeCidade01);
   printf("\n");

   printf ("a populaçaõ da cidade A1 é: %f \n", populacao01);
   printf("\n");

   printf ("a Área da cidade A1 é: %f\n", area01);
   printf("\n");

   printf ("o PIB da cidade A1 é: %f\n", pib01);
   printf("\n");
   
   printf ("o nº de pontos turisticos da cidade A1 é: %d\n\n", pontos_turisticos01);

   printf(" O PIB per capta na cidade da carta 1 é de : %.2f\n", pibpercapta1);

   printf("A densidade na cidade da carta 1 é: %.2f\n", densidade01);

    printf("***Fim dos dados carta 1***\n\n");
 
     ///////////// Exibição dos dados da carta 2 fornecidas pelo usúaria 
     printf ("Informações carta 2 do supertrunfo \n\n"); //tema ao que será exibido para o usúario (infos)

    printf ("O código da carta 2 é: %s \n", codigo02);
    printf("\n");

    printf ("A inicial do estado é: %s \n", estado02);
    printf("\n");

    printf ("O nome da cidade é: %s \n", nomeCidade02);
    printf("\n");

    printf ("a populaçaõ da cidade carta 2 é: %f \n", populacao02);
    printf("\n");

    printf ("a Área da cidade carta 2 é: %f\n", area02);
    printf("\n");

    printf ("o PIB da cidade carta 2 é: %f\n", pib02);
    printf("\n");
 
    printf ("o nº de pontos turisticos da cidade carta 2 é: %d\n", pontos_turisticos02);
    printf("\n");

    printf(" O PIB per capta na cidade da carta 2 é de : %.2f\n", pibpercapta2);

    printf("A densidade na cidade da carta 2 é: %.2f\n", densidade02);
    
    printf ("\n\n\n\n\n");
    ////////////////////////////////////////////////////////////
    ////* comparação de atributos escolhidos(neste caso a população dos dois estados)*

      printf("na comparação da população de duas cartas...");
      if (populacao01 > populacao02){
      printf ("população do estado 1 venceu!!\n\n");
      }else{
      printf ("polulação do estado 2 venceu!!\n\n");
      }

    return 0;
}

    
    
    
