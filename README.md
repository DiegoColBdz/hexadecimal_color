Integrantes: Diego Collazos y Samuel Corrales

Descripción:
Este programa recibe por consola el codigo de color hexadecimal y por medio de PWM se cambia el color del LED.
La linea de codigo "float red = (1-(float)((colorValue >> 16) & 0xFF) / 255.0f);", lo que hace es que desplaza 16 bits a la derecha
para obtener el color rojo.  "float green = (1-(float)((colorValue >> 8) & 0xFF) / 255.0f);", lo que hace es que desplaza 8 bits a la
derecha para obtener el color verde y por ultimo "float blue = (1-(float)(colorValue & 0xFF) / 255.0f);", extrae el color azul.

NOTA: No se pudo hacer la funcion del codigo que permitiera hacer uso del #.