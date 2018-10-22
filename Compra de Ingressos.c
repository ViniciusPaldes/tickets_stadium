#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TAMANHO 76

main ()
{
     int lugaresNorte[TAMANHO]={0},lugaresSul[TAMANHO]={0}, i,z=5, local, coluna, fileira, pessoas = 0;
     float preco, precoTotal = 0;
     char resp, compra, arqui;
     printf ("-----------------------\n");
     printf ("  Compra de Ingressos  \n");
     printf ("-----------------------\n");
     printf ("\n\n");
     printf ("Deseja adquirir ingressos para o jogo?\nS \\ N\n");
     scanf ("%c",&resp);
     tolower(resp);
     while (resp == 's')
     {
        system("cls");
        printf ("\t      ------------------------\n");
        printf ("\t     |        CADEIRAS        |\n");
        printf ("\t      ------------------------\n\t        (L-Livre\\R-Reservada)\n\n\n\n");
        for (i=1;i<TAMANHO;++i){
             if (lugaresNorte[i]==0)
                printf ("%3c",'L');
             else 
                 printf ("%3c",'R');
             if (i%15==0) 
             {
                printf ("   (%d)\n",z);
                --z;
             }
        }
        printf ("    ---------------------------------------\n");
        printf ("   |                  |                    |\n");
        printf ("   |                  |                    |\n");
        printf ("   |---               |                 ---|\n");
        printf ("   |   |             ( )               |   |\n");
        printf ("   |   |              |                |   |\n");
        printf ("   |---               |                 ---|\n");
        printf ("   |                  |                    |\n");
        printf ("   |                  |                    |\n");
        printf ("    ---------------------------------------\n");
        z = 1;
        for (i=1;i<TAMANHO;++i){
             if (lugaresSul[i]==0)
                printf ("%3c",'L');
             else 
                 printf ("%3c",'R');
             if (i%15==0) 
             {
                printf ("   (%d)\n",z);
                ++z;
             }
        }
        printf ("\n\n########################################\n");
        printf ("      Arquibancada Sul(S) ou Norte(N)?      \n");
        printf ("########################################\n");
        fflush(stdin);
        scanf ("%c",&arqui);
        if (arqui != 's')
        {
        printf ("\n\n\n§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§\n");
        printf ("Qual fileira voce deseja comprar?\n");
        printf ("§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§\n");
        scanf ("%d",&fileira);
        switch (fileira)
        {
                   case 1:
                        preco = 120;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                   
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresNorte[coluna+60]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo");
                                   lugaresNorte[coluna+60] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        break;
                   case 2:
                        preco = 110;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresNorte[coluna+45]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo");
                                   lugaresNorte[coluna+45] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        break;
                   case 3:
                        preco = 90;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresNorte[coluna+30]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo\n\n");
                                   lugaresNorte[coluna+30] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****\n");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****\n");
                        }
                        break;
                   case 4:
                        preco = 70;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresNorte[coluna+15]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo\n\n");
                                   lugaresNorte[coluna] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        
                        break;
                   case 5:
                        preco = 50;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresNorte[coluna]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo\n\n");
                                   lugaresNorte[coluna] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        
                        break;
        }
        }
        else
        {
                    printf ("\n\n\n§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§\n");
        printf ("Qual fileira voce deseja comprar?\n");
        printf ("§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§\n");
        scanf ("%d",&fileira);
        switch (fileira)
        {
                   case 5:
                        preco = 50;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                   
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresSul[coluna+60]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo");
                                   lugaresSul[coluna+60] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        break;
                   case 4:
                        preco = 70;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresSul[coluna+45]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo");
                                   lugaresSul[coluna+45] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        break;
                   case 3:
                        preco = 90;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresSul[coluna+30]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo\n\n");
                                   lugaresSul[coluna+30] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****\n");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****\n");
                        }
                        break;
                   case 2:
                        preco = 110;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresSul[coluna+15]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo\n\n");
                                   lugaresSul[coluna+15] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        
                        break;
                   case 1:
                        preco = 120;
                        printf ("Preco do ingresso: R$%.2f\nDeseja adquirir?(S-N)",preco);
                        fflush(stdin);
                        scanf ("%c",&compra);
                        tolower(compra);
                        if (compra == 's')
                        {
                           printf ("Qual cadeira?(1-15)");
                           scanf ("%d",&coluna);
                           if (coluna >= 1 && coluna <=15)
                           {
                               if (lugaresSul[coluna]==0)
                               {
                                   printf ("Ingresso adquirido.\nBom jogo\n\n");
                                   lugaresSul[coluna] = 1;
                                   precoTotal += preco;
                               }
                               else
                                   printf ("****Local ocupado****");
                           }
                           else
                               printf ("****Você digitou uma cadeira inválida****");
                        }
                        
                        break;
        }
        }
     printf ("\n\nDeseja adquirir ingressos para o jogo?\nS \\ N\n");
     fflush(stdin);
     scanf ("%c",&resp);
     tolower(resp);  
     ++pessoas;
     z = 5;
     }
     if (pessoas ==0)
     {
         system("cls");
         printf ("\n\n\n\n\n\n\n\n\t\t\t&&&&&Volte Sempre&&&&&");
     }
     else
     {
         system("cls");
         printf ("*********************************\n");
         printf ("          RENDA TOTAL            \n");
         printf ("*********************************\n\n\n");
         printf ("Total de Pagantes : %d\n" , pessoas);
         printf ("Renda total: %.2f\n\n",precoTotal);
         printf ("*********************************\n");
         printf ("          RENDA TOTAL            \n");
         printf ("*********************************");
     }
     getch();
}
     
