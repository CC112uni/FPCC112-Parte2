# Comandos para correr el programa: 
Colocar los siguientes comandos en consola:
## Primer comando:
Navegar hasta la carpeta: 
```
cd POO\Tarea_Resuelto
```
## Segundo comando: 
Ejecutar este comando: 
```
g++ main.cpp complejos_cuaterniones.cpp -o run
```
## Tercer comando: 
```
.\run
```

# Salida de ejemplo: 

```
| Ingrese el primer complejo (C2): 
|> Ingrese el valor a (a+bi): 24
|> Ingrese el valor b (a+bi): 12
| Ingrese el segundo complejo (C1):
|> Ingrese el valor a (a+bi): 13
|> Ingrese el valor b (a+bi): 20
| Complejos ingresados:
C1: 24 + 12i
C2: 13 + 20i
|[!] Resultado de la suma (C1+C2):
37 + 32i
|[!] Resultado de la resta (C1-C2):
11 -8i
|[!] Resultado de la multiplicación (C1*C2):
72 + 636i
|[!] Resultado de la división (C1/C2):
400.426 + 1.11775i
| Ingrese el primer cuaternion (Cu1):
|> Ingrese el valor a (a+bi+cj+dk): 12
|> Ingrese el valor b (a+bi+cj+dk): 15
|> Ingrese el valor c (a+bi+cj+dk): 20
|> Ingrese el valor d (a+bi+cj+dk): 2
| Ingrese el segundo cuaternion (Cu2):
|> Ingrese el valor a (a+bi+cj+dk): 5
|> Ingrese el valor b (a+bi+cj+dk): 12
|> Ingrese el valor c (a+bi+cj+dk): 16
|> Ingrese el valor d (a+bi+cj+dk): 20
| Cuaterniones ingresados:
Cu1: 12 + 15i + 20j + 2k
Cu2: 5 + 12i + 16j + 20k
|[!] Resultado de la suma(Cu1+Cu2):
17 + 27i + 36j + 22k
|[!] Resultado de la resta(Cu1-Cu2):
7 + 3i + 4j + -18k
|[!] Resultado de la multiplicación (Cu1*Cu2):
-480 + 587i + 16j + 250k
|[!] Resultado de la primera conjugada (Cu1*):
12 + -15i + -20j + -2k
|[!] Resultado de la segunda conjugada (Cu2*):
5 + -12i + -16j + -20k
|[!] Resultado de la primera norma (|Cu1|):
27.8029
|[!] Resultado de la segunda norma (|Cu2|):
28.7228
|[!] Resultado de la primera inversa (Cu1^{-1}):
0.0155239 + -0.0194049i + -0.0258732j + -0.00258732k
|[!] Resultado de la segunda inversa (Cu2^{-1}):
0.00606061 + -0.0145455i + -0.0193939j + -0.0242424k
```