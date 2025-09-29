/*
 * exo2.c
 *
 *  Created on: 25 sept. 2023
 *      Author: cjazzar
 */

#include <stdio.h>

#define MAX 100

void saisir(float Mat[MAX][MAX], int nb);
void afficher(float Mat[MAX][MAX], int nb);
void additionner(float Mat1[MAX][MAX], float Mat2[MAX][MAX], float Mat3[MAX][MAX],int nb);
void multiplier(float Mat1[MAX][MAX],float Mat2[MAX][MAX],float Mat3[MAX][MAX],int nb);
char menu();

/* int main (void)
{
    float M[MAX][MAX],P[MAX][MAX],R[MAX][MAX];
    int nb_val;
    char rep;

    rep = menu();
    do
    {
       switch(rep)
       {
          case 'a': case 'A':
                              printf ("taille de la matrice carree :\n");
                              scanf ("%d", &nb_val);
                              printf("saisir de la 1ere matrice\n");
                              saisir(M,nb_val);
                              printf("saisir de la 2eme matrice\n");
                              saisir(P,nb_val);
                              additionner(M,P,R,nb_val);
                              break;
          case 'm': case 'M':
                              printf ("taille de la matrice carree :\n");
                              scanf ("%d", &nb_val);
                              printf("saisir de la 1ere matrice\n");
                              saisir(M,nb_val);
                              printf("saisir de la 2eme matrice\n");
                              saisir(P,nb_val);
                              multiplier(M,P,R,nb_val);
                              break;
          case 'q': case 'Q': ;
       }
       if (rep == 'a' || rep == 'A' || rep == 'm' || rep == 'M')
       {
         afficher(M,nb_val);
         afficher(P,nb_val);
         afficher(R,nb_val);
       }
       rep =  menu();
    } while (rep != 'q' && rep != 'Q');
}*/


char menu()
{
   char rep;

   printf("          A....................Addition\n");
   printf("          M....................Multiplication\n");
   printf("CHOIX: ");
   rewind (stdout);
   scanf(" %c",&rep);
   return rep;
}



void saisir(float Mat[MAX][MAX], int nb)
{
    int i,j;

    printf ("entrer les valeurs de la matrice\n");
    for (i = 0; i < nb; i++)
    {
         printf(" ligne numero %d \n",i+1);
         for(j=0;j<nb;j++)
         {
        	printf ("\nM[%d][%d] = ", i+1,j+1);
        	rewind(stdout);
        	scanf ("%f", &(Mat[i][j]));
         }
    }
}



void afficher(float Mat[MAX][MAX], int nb)
{
    int i,j;

    printf("Affichage matrice\n");
    printf("\t");
    for (i = 0; i < nb; i++)
    printf("\t%d\t",i+1);
    printf("\n\t");
    for (i = 0; i < nb; i++)
    printf("________________");
    for (i = 0; i < nb; i++)
    {
	printf("\n%d\t:",i+1);
    	for (j = 0; j < nb; j++)
        	printf ("\t%f", Mat[i][j]);
    }
    printf("\n\t");
    for (i = 0; i < nb; i++)
    printf("________________");
    printf("\n");

}






void additionner(float Mat1[MAX][MAX],float Mat2[MAX][MAX],float Mat3[MAX][MAX],int nb)
{
    int i,j;

    for(i=0;i<nb;i++)
   {
        for(j=0;j<nb;j++)
		 Mat3[i][j] = Mat1[i][j]+Mat2[i][j];
	}
}



void multiplier(float Mat1[MAX][MAX], float Mat2[MAX][MAX],float Mat3[MAX][MAX],int nb)
{
     int i,j,k;

     for(i=0;i<nb;i++)
          for(j=0;j<nb;j++)
         {
              Mat3[i][j]=0;
              for(k=0;k<nb;k++)
	     Mat3[i][j] = Mat3[i][j]+Mat1[i][k] * Mat2[k][j];
          }
}

