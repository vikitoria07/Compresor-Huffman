
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "huffman.h"

#define MAX_RUTA 512

void limpiarEntrada(void) {
   int c;
   while ((c = getchar()) != '\n' && c != EOF);
}

void leerRuta(const char* mensaje, char* ruta, int capacidad) {
   printf("%s", mensaje);

   if (fgets(ruta, capacidad, stdin) != NULL) {
      ruta[strcspn(ruta, "\n")] = '\0';
   }
}

int main(void) {
   int opcion;
   char archivoEntrada[MAX_RUTA];
   char archivoSalida[MAX_RUTA];

   do {
      printf("\n====================================\n");
      printf("        COMPRESOR HUFFMAN\n");
      printf("====================================\n");
      printf("1. Comprimir archivo\n");
      printf("2. Descomprimir archivo\n");
      printf("3. Salir\n");
      printf("------------------------------------\n");
      printf("Seleccione una opcion: ");

      if (scanf("%d", &opcion) != 1) {
         printf("\nEntrada invalida. Ingrese un numero.\n");
         limpiarEntrada();
         continue;
      }

      if (opcion < 1 || opcion > 3) {
         printf("\nEntrada invalida. Ingrese un numero entre 1 y 3.\n");
         limpiarEntrada();
         continue;
      }

      limpiarEntrada();

      switch (opcion) {
      case 1:
         printf("COMPRIMIR ARCHIVO \n");
         leerRuta("\nRuta del archivo original: ",
            archivoEntrada, MAX_RUTA);

         leerRuta("Ruta del archivo comprimido: ",
            archivoSalida, MAX_RUTA);

         if (comprimir(archivoEntrada, archivoSalida) == 0) {
            printf("\nArchivo comprimido exitosamente.\n");
         }
         else {
            printf("\nNo se pudo comprimir el archivo.\n");
         }
         break;

      case 2:
         leerRuta("\nRuta del archivo comprimido: ",
            archivoEntrada, MAX_RUTA);

         leerRuta("Ruta del archivo restaurado: ",
            archivoSalida, MAX_RUTA);

         if (decompress(archivoEntrada, archivoSalida) == 0) {
            printf("\nArchivo descomprimido exitosamente.\n");
         }
         else {
            printf("\nNo se pudo descomprimir el archivo.\n");
         }
         break;

      case 3:
         printf("\nGracias por utilizar Compresor Huffman.\n");
         break;

      default:
         printf("\nOpcion no valida. Intente nuevamente.\n");
      }

   } while (opcion != 3);

   return 0;
}
