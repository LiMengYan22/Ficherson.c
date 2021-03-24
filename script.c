#include <stdio.h>
#include <string.h>
int main() 
{
FILE* fich;
int n=100;
char f[n];
fich=fopen ("ficherson.txt" , "w");
do
   {
   printf("Escribe una frase para insertar en el Fichero o escribe SALIR:...");
   scanf ("%s" , f);
   getchar();
   if (strcmp (f, "SALIR") !=0)
   fprintf (fich, "%s" , f );
   }
   while (strcmp (f, "SALIR") !=0);
   fclose (fich);
   return 0; 
}
