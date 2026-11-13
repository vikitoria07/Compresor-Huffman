# Compresor y Descompresor Huffman

Implementación del algoritmo de Huffman en lenguaje C para la compresión y descompresión de archivos.

## Requisitos

- Git
- CMake 3.15 o superior
- Un compilador de C compatible (MSVC, GCC o Clang)

## Clonar el repositorio

```bash
git clone https://github.com/TU-USUARIO/Compresor-Huffman.git
cd Compresor-Huffman
```

## Compilar el proyecto

Desde la carpeta raíz:

```bash
cmake -S . -B build
cmake --build build --config Release
```

## Ejecutar en Windows

```powershell
.\build\Release\huffman.exe
```

Si se compiló en Debug:

```powershell
.\build\Debug\huffman.exe
```

## Ejecutar en Linux o macOS

```bash
./build/huffman
```

## Uso del programa

Al ejecutar el programa se presenta un menú interactivo con las siguientes opciones:

1. Comprimir archivo.
2. Descomprimir archivo.
3. Salir.

El usuario debe proporcionar la ruta del archivo de entrada y la ruta donde desea guardar el resultado.

## Pruebas

La carpeta `pruebas/originales` contiene archivos de ejemplo para probar diferentes formatos.

Se recomienda comprobar la integridad de los archivos restaurados mediante una comparación SHA-256 entre el original y el descomprimido.

## Estructura del proyecto

- `main.c`: interfaz de consola.
- `compres.c`: lógica de compresión Huffman.
- `decompres.c`: lógica de descompresión Huffman.
- `huffman.h`: declaraciones de las funciones.
- `CMakeLists.txt`: configuración de compilación.
