#Implementar un programa que permita representar un producto que contiene nombre, precio y cantidad disponible.
# Además, implemente una función que imprima los detalles de cada producto.

producto_1 = ["Arroz", 3.50, 5]
producto_2 = ["Aceite", 3.00, 7]
producto_3 = ["Manzana", 2.00, 3]

#Un mensaje para que el usaurio pueda ver las opciones
print("1. Arroz")
print("2. Aceite")
print("3. Manzana")
print("4. Salir")

#El usuario inserte la opcion que eligio
eleccion = int(input("Ingrese el producto que desea ver:"))

#Creamos la funcion que permite visualizar los productos segun lo que elija el usuario
def visualizar(eleccion):
    if (eleccion == 1):
        print("El producto que selecciono es:",producto_1[0])
        print("Precio:s/.",producto_1[1],)
        print("Disponible",producto_1[2],"kg")
    elif (eleccion == 2):
        print("El producto que selecciono es:",producto_2[0])
        print("Precio:s/.",producto_2[1],)
        print("Disponible",producto_2[2],"unidades")
    elif (eleccion == 3):
        print("El producto que selecciono es:",producto_3[0])
        print("Precio:s/.",producto_3[1],)
        print("Disponible",producto_3[2],"kg")
    elif (eleccion == 0):
        return "Saliendo del programa"
    else:
        eleccion = input("Eleccion no valida")
#Observamos que a diferencia de C++, en Python no exite el switch
#Por lo tanto trabajamos con if, elif y else

visualizar(eleccion)