#Torre de Hanoi

#Declaramos La variable que indicara con cuantos discos se trabajara
#Cantidad que sera ingresada por el usuario
discos = int(input('Ingrese la cantidad de discos: '))
#A diferencia de C++ en python se declara el tipo de variable, junto al mensaje que se le pedira al usuario para
#que ingrese el valor de los discos

#Creamos la funcion recursiva que permitira resolver el problema
def MoverDiscos(discos,inicio,fin,intermedio):
    if discos >= 1:
        MoverDiscos(discos-1,inicio,intermedio,fin)
        Posicion(inicio,fin)
        MoverDiscos(discos-1,intermedio,fin,inicio)

#La siguiente funcion nos dira cuales son los movimientos que se deben realizar
def Posicion(origen,destino):
    print("Movemos el disco de",origen,"a",destino)

#Ponemos a funcionar la funcion antes creada
MoverDiscos(discos,"A","B","C")

#Movimientos requeridos segun el numero de discos : 2**n - 1
movimientos = 2**discos - 1

#Mostramos el mensaje indicando la cantidad de movimientos usados
print("Total de movimientos:",movimientos)