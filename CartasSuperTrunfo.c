#include <stdio.h>

int main(){     //Criando as variaveis
    int     populacao1, populacao2;         //Variaveis da População
    int     num_turistico1, num_turistico2; //Variaveis do ponto turistico
    float   area1, area2;                   //Variaveis da Area
    float   PIB1, PIB2;                     //Variaveis do PIB
    float   PIBC1, PIBC2;                   //Variaveis do PIB per Capita
    float   den1, den2;                     //Variaveis da Densidade Populacional
    char    estado1[20], estado2[20];       //Variaveis do nome do estado
    char    cod_carta1[20], cod_carta2[20]; //Variaveis do Código da carta
    char    nome1[20], nome2[20];           //Variaveis do Nome da Cidade

    printf ("Olá!!! Bem vindo ao armazenamento das informações da carta de Super Trunfo!\n");
    printf ("Por favor, nos dê as informações de suas cartas como é pedido em adiante\n");
    printf ("\n");
    printf ("!!!AVISO!!!\n");
    printf ("Espacos e acentos não funcionam como resposta, por favor se atentar em não coloca-lo e substituir o espaço por underline(_)\n");
    printf ("\n"); 

    // Coletando a informação da primeira cartaa
    printf ("Digite o nome do Estado:\n");
    scanf  ("%s", &estado1);        //Nome do Estado

    printf ("Código da Carta:\n");
    scanf  ("%s", &cod_carta1);     //Código da Carta

    printf ("Nome da Cidade:\n");
    scanf  ("%s", &nome1);          //Nome da Cidade

    printf ("População da Carta: \n");
    scanf  ("%d", &populacao1);     // População da Carta

    printf ("Área em km² da Carta:\n");
    scanf  ("%f", &area1);          // Arêa da Carta

    printf ("O PIB da Carta:\n");
    scanf  ("%f", &PIB1);           // PIB da Carta

    printf ("Por ultimo, os Pontos Turisticos da carta:\n");
    scanf  ("%d", &num_turistico1); // Numêro Turistico da Carta
    printf ("\n");

    printf ("Ótimo!!! Tudo certo com as informações da sua primeira carta, agora, nos dê a informação da segunda carta\n");
    printf ("\n");

    // Calculo da primeira cidade

    den1   = (float) populacao1 / area1;  //Calculo da Densidade populacional
    PIBC1  = (float) PIB1 / populacao1 ;  //Calculo do PIB per Capita

    // Coletando da Segunda carta 
    printf ("Digite o nome do Estado:\n");
    scanf  ("%s", &estado2);        // Nome do Estado

    printf ("Código da Carta:\n");
    scanf  ("%s", &cod_carta2);     // Código da Carta

    printf ("Nome da Cidade:\n");
    scanf  ("%s", &nome2);          // Nome da Cidade

    printf ("População da Carta: \n");
    scanf  ("%d", &populacao2);     // População da Carta

    printf ("Área em km² da Carta:\n");
    scanf  ("%f", &area2);          // Arêa da Carta

    printf ("O PIB da Carta:\n");
    scanf  ("%f", &PIB2);           // PIB da Carta

    printf ("Por ultimo, os Pontos Turisticos da carta:\n");
    scanf  ("%d", &num_turistico2); // Nûmero Turistico da Primeira carta
    printf ("\n");

    printf ("Tudo certo agora, aqui está a informação das duas cartas coletadas!!!\n");
    printf ("\n");

    // Calculo da segunda cidade

    den2   = (float) populacao2 / area2;  //Calculo da Densidade populacional
    PIBC2  = (float) PIB2 / populacao2 ;  //Calculo do PIB per Capita

    // Mostrando as informações coletadas da primeira carta
    printf ("Primeira Carta\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código da Carta: %s\n", cod_carta1);
    printf ("nome da Cidade: %s\n", nome1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf ("Numêro de Pontos Turistico: %d\n", num_turistico1);
    printf ("Densidade populacional: %.2f hab/km²\n", den1);
    printf ("PIB per Capita: %.2f Reais\n", PIBC1);
    printf ("\n");
   
    // Mostrando as informações coletadas da segunda carta
    printf ("Segunda Carta\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código da Carta: %s\n", cod_carta2);
    printf ("nome da Cidade: %s\n", nome2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf ("Numêro de Pontos Turistico: %d\n", num_turistico2);
    printf ("Densidade populacional: %.2f hab/km²\n", den2);
    printf ("PIB per Capita: %.2f Reais\n", PIBC2);

}   