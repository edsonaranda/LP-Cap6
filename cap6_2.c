#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   
   int *numPtr, i;
   int tamanyo=0;

   printf( "Introduzca el tamaño de la lista: " );
   scanf( "%d", &tamanyo );
   
   //se solicita un espacio de memoria (malloc) para una determinada variable 
   puts( "Adjudicamos espacio a la lista." );
   numPtr = (int *)malloc( tamanyo*sizeof(int) );
   

   for( i=0; i<tamanyo; i++ )
      printf( "%d, ", numPtr[i] = rand() % 100 + 1 );
   printf("\n");
   
   puts( "Liberamos el espacio." );
   free(numPtr);
  // La función free sirve para liberar memoria que se asignó dinámicame
   // una vez lierada la memoria se puede volver a utilziar el puntero.
   printf( "comprobando: " );
   for( i=0; i<tamanyo; i++ )
   {
     
      printf( "%d, ", numPtr[i]);
   }
   printf("\n");
   return 0;
}
