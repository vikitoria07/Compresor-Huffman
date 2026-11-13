// #ifndef: esta funcion se utiliza para evitar la inclusión múltiple del mismo archivo de encabezado. Si HUFFMAN_H no está definido, se define y se incluye el contenido del archivo. Si ya está definido, se omite el contenido del archivo.
#ifndef HUFFMAN_H

// #define: define la macro HUFFMAN_H para indicar que el archivo de encabezado ha sido incluido.
#define HUFFMAN_H

// Este header define las funciones para la compresión 
// y descompresión de archivos usando el algoritmo de Huffman.

// Declaración de funciones para compresión y descompresión de archivos usando el algoritmo de Huffman
int comprimir(const char* archivoEntrada, const char* archivoSalida);

// Declaración de funciones para compresión y descompresión de archivos usando el algoritmo de Huffman
int decompress(const char* archivoEntrada, const char* archivoSalida);

#endif
