#Diseña un sistema que gestione una flota de vehículos.
#El programa debe permitir crear una clase base llamada Vehiculo que incluya atributos comunes como marca, modelo y año
#crear clases derivadas como Automovil y Motocicleta que hereden de Vehiculo y tengan atributos adicionales.
#Implementar un constructor para inicializar los atributos.
#Implementar un destructor que muestre un mensaje indicando que el vehículo se está eliminando.
#Implementar un método mostrar_informacion() en la clase base que sea sobrescrito en las clases derivadas
#Para mostrar detalles específicos de cada tipo de vehículo.
#Presentar un sistema interactivo donde el usuario pueda: Añadir vehículos.
#Mostrar información de todos los vehículos. Eliminar un vehículo.

#Creamos la clase base Vehiculo
class Vehiculo:
    #Usamos __init__ para inicializar los valores, en este caso seran la marca, modelo y año
    def __init__(self, marca, modelo, año):
        self.marca = marca
        self.modelo = modelo
        self.año = año

    #Creamos una funcion que nos permite mostrar la informacion del vehiculo
    def mostrar_informacion(self):
        return (f"Vehiculo: {self.marca} {self.modelo} ({self.año})")

#Creamos la clase derivada vehiculo
class Automovil(Vehiculo):
    #Le agregamos en este caso una nueva caracteristica que sera precio
    def __init__(self, marca, modelo, año, precio):
        #Utilizamos super() para registar las instancias de la clase base sin usar el self
        super().__init__(marca, modelo, año)
        self.precio = precio
    
    #Creamos la funcion que nos mostrar la informacion del vehiculo junto a su nueva caracteristica
    def informacion_auto(self):
        print(f"Automovil: {self.marca} {self.modelo} ({self.año}). Precio: s/{self.precio}")

#Creamos la clase derivada Motocicleta
#Haremos lo mismo que con la clase derivada Automovil, solo que en vez de precio sera kilometraje
class Motocicleta(Vehiculo):
    def __init__(self, marca, modelo, año, kilometraje):
        super().__init__(marca, modelo, año)
        self.kilometraje = kilometraje
    def informacion_auto(self):
        print(f"Automovil: {self.marca} {self.modelo} ({self.año}). La motocicleta tiene un kilometraje de {self.kilometraje}")

class Taller:
    def __init__(self):
        #Creamos una lista asociada a las instancias de los objetos
        self.vehiculos = []

    #Creamos la funcion que permite al usuario llenar los datos del vehiculo que desea agregar
    #ya sea automovil o motocicleta
    def añadir_vehiculo(self):
        tipo = input("¿Qué tipo de vehiculo deseas añadir? (Automovil/Motocicleta): ").lower().replace('ó','o')

        #Utilizamos el if para que el usaurio llene el dato segun el tipo de vehiculo
        #Si elige automovil agregara la caracteristica de precio
        if tipo == "automovil":
            marca = input("Marca: ")
            modelo = input("Modelo: ")
            año = int(input("Año: "))
            precio = int(input("Precio: "))
            vehiculo = Automovil(marca, modelo, año, precio)
        #Si elige motocicleta entonces agregara la caracteristica de kilometraje
        elif tipo == "motocicleta":
            marca = input("Marca: ")
            modelo = input("Modelo: ")
            año = int(input("Año: "))
            kilometraje = input("Kilometraje: ")
            vehiculo = Motocicleta(marca, modelo, año, kilometraje)
        else:
            print("No se reconoce el tipo de vehiculo")
            return
        
        #Aumentamos el vehiculo creado a la lista
        self.vehiculos.append(vehiculo)
        print(f"{tipo.capitalize()} añadido con éxito.")
    
    #Creamos la funcion que nos permite ver que vehiculos tenemos registrados
    def mostrar_vehiculos(self):
        #Si no hay vehiculos el programa se lo dira al usuario
        if not self.vehiculos:
            print("No hay vehículos en el taller.")
        else:
            #En caso si haya vehiculosregistrados se mostraran junto a sus caracteristicas
            print("\nInformación de todos los vehículos:")
            for vehiculo in self.vehiculos:
                print(vehiculo.mostrar_informacion())
    
    #Creamos la funcion para eliminar los vehiculos
    def eliminar_vehiculo(self):
        #Si no hay vehiculos el programa se lo indicara al usuario
        if not self.vehiculos:
            print("No hay vehículos en el taller para destuir, agregue vehiculos.")
            return
        
        #En caso se encuentre vehiculos se mostraran
        self.mostrar_vehiculos()
        #Pedimos al usuario que ingrese en numero de la lista del auto que desea eliminar
        indice = int(input("Ingrese el número del vehículo a destruir: ")) - 1
        
        #Analizamos si esta registrado el numero de lista
        if 0 <= indice < len(self.vehiculos):
            vehiculo = self.vehiculos.pop(indice)
            #De ser asi eliminamos el vehiculo
            del vehiculo
            print("Vehículo destruido.")
        else:
            #De lo contario le avisaremos al usuario
            print("Vehiculo no encontrado.")

#Definimos la funcion que presente las opciones
def menu():

    #Creamos la variable que trabajara con las caracteristicas de la clase Taller
    taller = Taller()

    #Imprimiremos el menu cada que se complete una accion
    while True:
        print("\n--Opciones del taller--")
        print("1. Añadir vehiculo")
        print("2. Mostrar informacion de vehiculos")
        print("3. Eliminar vehiculo")
        print("4. Salir")

        #Pedimos la accion a realizar del usario
        opcion = input("Seleecione una opcion: ")

        #Realizamos las acciones segun la opcion que eligio el usuario
        if opcion == "1":
            taller.añadir_vehiculo()
        elif opcion == "2":
            taller.mostrar_vehiculos()
        elif opcion == "3":
            taller.eliminar_vehiculo()
        elif opcion == "4":
            #Cerramos el programa
            print("Saliendo del sistema....")
            break
        else:
            print("Opcion no valida, intente de nuevo")

#Iniciamos el programa
menu()