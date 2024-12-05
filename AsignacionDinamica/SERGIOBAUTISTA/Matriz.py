#Implementa la función que acepte una lista de enteros, calcule su suma y devuelva el resultado. 
#El tamaño debe ser introducida por el usuario.

filas = int(input("Ingrese el numero de filas de la matriz: "))
columnas = int(input("Ingrese el numero de columnas de la matriz: "))

matriz = []
for i in range(filas):
    matriz.append([])
    for j in range(columnas):
        valor = float(input("Elemento [{}][{}] : ".format(i+1, j+1)))
        matriz[i].append(valor)

print()
for fila in matriz:
    print("[", end=" ")
    for elemento in fila:
        print("{:8.2f}".format(elemento), end=" ")
    print("]")
print()