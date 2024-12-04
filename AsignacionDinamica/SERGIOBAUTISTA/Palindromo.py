#Determinar si una cadena es un palindromo

#Pedimos al usuario que ingrese la palabra o frase que se analizara
texto = input("Ingrese la palabra o frase: ")

#Creamos la funcion que determinara si es palindromo o no
def palindromo(texto):

    reverso = str(texto).lower().replace(' ','').replace('1','').replace('2','').replace('3','').replace('4','').replace('5','').replace('6','').replace('7','').replace('8','').replace('9','').replace('0','').replace(',','').replace('.','').replace(';','').replace('á','a').replace('é','e').replace('í','i').replace('ó','o').replace('ú','u')
    return (reverso == reverso[::-1])

if(palindromo(texto) == True):
    print("Si es palindromo")
else:
    print("No es palindromo")


