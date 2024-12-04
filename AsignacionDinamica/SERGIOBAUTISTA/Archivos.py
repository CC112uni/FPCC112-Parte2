#Abrir un archivo existente y modificarlo

#Definimos a f como un objeto para trabajar con los archivos
#Usamos open para abrir el archivo existente
#La letra a es de append, lo que nos permitira agregar contenido al archivo
#En caso se quiera borrar todo lo que habia usamos w de write

f = open("Creando.txt","a")

#Usamos write para añadir la cadena que se encuentra dentro del parentesis
f.write("Hello\n")

#Utilizamos close para cerrar el archivo
f.close()

#La funcion closed nos indicara si el archivo esta cerrado o no
#Cerrado = True, Abierto = False
print(f.closed)
