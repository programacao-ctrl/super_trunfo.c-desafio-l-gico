#include <stdio.h>

      int main(){
  
     char PAÍS;
     char codigo[4];
     char cidade[20];
     int habitantes;
     float area;
     float PIB;
     int turisticos;
    float densidade;
    float percapta;
    float superpoder;



     //aqui o jogador colocara outra letra que representa um estado 
     printf("digite uma  letra que representa um País : ");
     scanf("%c", &PAÍS);

     //aqui o jogador colocara o codigo da carta 
    printf("agora digite o codigo da carta : ");
    scanf("%s", &codigo);
    

    
    //aqui o jogador colocará  o nome da cidade       
    printf("agora digite o nome do País : "); 
    scanf("%s", &cidade);


    //aqui o jogador colocar o numero de  habitantes da cidade 
    printf("qual é seu numero de habitantes? : ");
    scanf("%d", &habitantes);


    //aqui o  jogador colocara o tamanho em km² dessa area.
    printf("qual o tamanho  da sua area em km² : ");
    scanf("%f", &area);



    //aqui o jogador colocará o valor em numeros do seu PIB.
    printf("qual o  seu PIB (produto interno bruto) : ");
    scanf("%f", &PIB);


  
    
    //aqui o joggador colocara quantos pontos turisticos erxistem nessa região.
    printf("quantos pontos turisticos existem nessa região? : ");
    scanf("%d", &turisticos);

  densidade = (float) habitantes / area;

  percapta = (float) PIB / habitantes;

   superpoder = habitantes + PIB + percapta + densidade / densidade + turisticos;



    printf("\n carta 01\n");

    printf("País : %c\n", PAÍS);

    printf("codigo : %s\n", codigo);

    printf("cidade : %s\n", cidade);

    printf(" habitantes : %d\n", habitantes);

    printf("area em km² : %.3f\n", area);

    printf("PIB : %f\n", PIB);

    printf(" pontos turisticos : %d\n", turisticos);
      
    printf("densidade populacional : %f\n", densidade);
    
    printf("pib percapta : %f\n", percapta);    

    printf("super poder : %f\n", superpoder);



      char PAÍS2;
      char codigo2[4];
      char cidade2[20];
      float habitantes2;
      float area2;
      float PIB2;
      int turisticos2;
      float densidade2;
      float percapta2;
      float superpoder2;
      int resultado3;
      

    //aqui o jogador  uma outra letra que representa outro estado 
    printf(" digite outra letra que representa outro País :  ");
    scanf("%s", &PAÍS2);

    // aqui o  jogador colocará o outro codigo da carta
    printf(" agora digite um outro codigo da carta :  ");
    scanf("%s", &codigo2);
    

    
    //aqui o jogador irá inserir o nome de outra cidade.
    printf("agora digite um outro nome de outro País : "); 
    scanf("%s", &cidade2);


    //aqui o jogador colocar o numero de  habitantes dessa cidade . 
    printf("qual é seu numero de habitantes? :  ");
    scanf("%f", &habitantes2);


    //aqui o  jogador colocara o tamanho em km² dessa  segunda area.
    printf("qual o tamanho  da sua area em km² :  ");
    scanf("%f", &area2);



    //aqui o jogador colocará o valor em numeros do seu PIB dessa cidade .
    printf("qual o  seu PIB (produto interno bruto) :  ");
    scanf("%f", &PIB2);


  
    
    //aqui o joggador colocara quantos pontos turisticos erxistem nessa região.
    printf("quantos pontos turisticos existem nessa região? :  ");
    scanf("%d", &turisticos2);

    densidade2 = (float) habitantes2 / area2;

    percapta2 = (float) PIB2 / habitantes2;

    superpoder2 = habitantes2 + PIB2 + percapta2 + densidade2 / densidade2 + turisticos2;
  
     resultado3 = habitantes >= habitantes2;
     resultado3 = area >= area2;
     resultado3 = PIB >= PIB2;
     resultado3 = turisticos >= turisticos2;
     resultado3 = densidade >= densidade2;
     resultado3 = percapta >= percapta2;



    printf("\n carta 02\n");

    printf("País: %c\n", PAÍS2);

    printf("codigo : %s\n", codigo2);

    printf("cidade : %s\n", cidade2);

    printf(" habitantes :  %.3f  %d\n", habitantes2, resultado3, habitantes, habitantes2);

    printf("area em km² : %.3f  %d\n", area2, resultado3, area, area2);

    printf("PIB : %f  %d\n", PIB2, resultado3, PIB, PIB2);

    printf("pontos turisticos : %d   %d\n", turisticos2, resultado3, turisticos, turisticos2);

    printf("densidade populacional : %f  %d\n", densidade2, resultado3, densidade, densidade2);

    printf("pib percapta : %f  %d\n", percapta2, resultado3, percapta, percapta2);

    printf("super poder : %f\n", superpoder2);


    int comparacao;
    

     //aqui surgirá o menu intereativo
     printf("### escolha oque voce quer comparar ###\n");
     printf("1. nome dos Países\n");
     printf("2. população\n");
     printf("3. area\n");
     printf("4. PIB\n");
     printf("5. numeros de pontos turisticos\n");
     printf("6. densidade demográfica\n");
     scanf("%d", &comparacao);

     //aqui será o resultado da comparação
    switch (comparacao)
    {
    case 1:
    printf("os Paises são %s\n", cidade , cidade2);
      break;
    case 2:
    printf("a população da\n");
       //comparação de população
    if (habitantes > habitantes2)  {
       printf("carta 01 venceu\n");
    } else if(habitantes2 > habitantes) {
      printf("carta 02 venceu\n");
    }  else if (habitantes == habitantes2) {
       printf("empatou\n");
    }

      break;

    case 3:
    printf("a area da\n");
      
       //comparação de area
    if (area > area2)  {
      printf("carta 01 venceu\n");
   } else if(area2 > area) {
     printf("carta 02 venceu\n");
   }  else if (area == area2) {
      printf("empatou\n");
   }
      break;

    case 4:
    printf("o PIB  da\n");

      //comparação de pib
    if (PIB > PIB2)  {
      printf("carta 01 venceu\n");
   } else if(PIB2 > PIB) {
     printf("carta 02 venceu\n");
   }  else if (PIB == PIB2) {
      printf("empatou\n");
   }
       break;

    case 5:
    printf("o numero de pontos turisticos da\n");
       //comparação de pontos turisticos
      if (turisticos > turisticos2)  {
        printf("carta 01 venceu\n");
     } else if(turisticos2 > turisticos) {
       printf("carta 02 venceu\n");
     }  else if (turisticos == turisticos2) {
        printf("empatou\n");
     }
        break;
    case 6:
    printf("a densidade demografica da\n");
       //comparação de  densidade demografica
       if (densidade > densidade2)  {
        printf("carta 02 venceu\n");
     } else if(densidade2 > densidade) {
       printf("carta 01 venceu\n");
     }  else if (densidade == densidade2) {
        printf("empatou\n");
     }
      break;
      
      default:
        printf("opção invalida\n");
      break;
    }

    
     













     return 0;
      
      }