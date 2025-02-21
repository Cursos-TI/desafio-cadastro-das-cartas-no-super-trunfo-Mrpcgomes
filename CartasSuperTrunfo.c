#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 
///declaração de variáveis para a primeira carta 
   char codigo01[3];
   char estado01[4];
   char nomeCidade01[50];
   int populacao01;
   float area01;
   float pib01;
   int pontos_turisticos01;

    printf ("Desafio das cartas super-trunfo \n\n") //Título do programa 
    
//entrada de dados primeira carta 
    
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
   scanf ("%d", &populacao01);
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

   
   
   
    /////////////////////////////////////////////////// inicio segunda carta 

////declaração de variáveis para segunda carta 
    char codigo02[3];
    char estado02[4];
    char nomeCidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int pontos_turisticos02;
 
    printf ("cadastro da carta 2 \n"); //informação clara sobre os dados que o usúario irá inserir 
    printf("\n\n"); //printf para pular linha e deixar mais organizado 

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
    scanf ("%d", &populacao02);
    printf("\n");

    
 
    printf ("insira a Área da cidade carta 2:");
    scanf ("%f", &area02);
    printf("\n");

    
 
    printf ("insira o PIB da cidade carta 2:");
    scanf ("%f", &pib02);
    printf("\n");

   
 
    printf ("insira o nº de pontos turísticos da carta 2:");
    scanf ("%d", &pontos_turisticos02);
    printf("\n\n");

    printf ("Dados das cartas super trunfo \n");


      //////Exibição dos dados da carta 1 fornecidas pelo usúario
   printf ("Informações carta 1 do supertrunfo \n");

   printf ("O código da carta 1 é: %s \n", codigo01);
   printf("\n");

   printf ("A inicial do estado é: %s \n", estado01);
   printf("\n");

   printf ("O nome da cidade é: %s \n", nomeCidade01);
   printf("\n");

   printf ("a populaçaõ da cidade A1 é: %d \n", populacao01);
   printf("\n");

   printf ("a Área da cidade A1 é: %f\n", area01);
   printf("\n");

   printf ("o PIB da cidade A1 é: %f\n", pib01);
   printf("\n");
   
   printf ("o nº de pontos turisticos da cidade A1 é: %d\n\n", pontos_turisticos01);

    printf("\n\n");
 
     ///////////// Exibição dos dados da carta 2 fornecidas pelo usúaria 
     printf ("Informações carta 2 do supertrunfo \n\n");

    printf ("O código da carta 2 é: %s \n", codigo02);
    printf("\n");

    printf ("A inicial do estado é: %s \n", estado02);
    printf("\n");

    printf ("O nome da cidade é: %s \n", nomeCidade02);
    printf("\n");

    printf ("a populaçaõ da cidade carta 2 é: %d \n", populacao02);
    printf("\n");

    printf ("a Área da cidade carta 2 é: %f\n", area02);
    printf("\n");

    printf ("o PIB da cidade carta 2 é: %f\n", pib02);
    printf("\n");
 
    printf ("o nº de pontos turisticos da cidade carta 2 é: %d\n", pontos_turisticos02);
    printf("\n");





    return 0;
}

    
    
    
