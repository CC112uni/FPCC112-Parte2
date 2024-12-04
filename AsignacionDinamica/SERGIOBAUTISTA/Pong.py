#Utilizamos la biblioteca turtle para dibujar figuras
import turtle

#Creamos una ventana
wn = turtle.Screen()
#Le ponemos nombre a la ventana
wn.title("Pong")
#Cambiamos el color de la ventana
wn.bgcolor("black")
#Definimos el tamaño de la ventana
wn.setup(width=800, height=600)
#Hacemos que la ventana no se actualize
wn.tracer(0)

#Marcador
puntaje_a = 0
puntaje_b = 0

# Paleta A
paleta_A = turtle.Turtle()
paleta_A.speed(0)
paleta_A.shape("square")
paleta_A.color("white")
paleta_A.shapesize(stretch_wid=5, stretch_len=1)
paleta_A.penup()
paleta_A.goto(-350, 0)


# Paleta B
paleta_B = turtle.Turtle()
paleta_B.speed(0)
paleta_B.shape("square")
paleta_B.color("white")
paleta_B.shapesize(stretch_wid=5, stretch_len=1)
paleta_B.penup()
paleta_B.goto(350, 0)

# Pelota
Pelota = turtle.Turtle()
Pelota.speed(0)
Pelota.shape("square")
Pelota.color("white")
Pelota.penup()
Pelota.goto(0, 0)
Pelota.dx = 0.1
Pelota.dy = 0.1

#Marcador
pen = turtle.Turtle()
pen.speed(0)
pen.color("white")
pen.penup()
pen.hideturtle()
pen.goto(0, 260)
pen.write("Jugador A: {}    Jugador B: {}".format(puntaje_a, puntaje_b), align="center", font=("Console", 24, "normal"))

#Funciones
def paleta_A_arriba():
    y = paleta_A.ycor()
    y += 20
    paleta_A.sety(y)

def paleta_A_abajo():
    y = paleta_A.ycor()
    y -= 20
    paleta_A.sety(y)

def paleta_B_arriba():
    y = paleta_B.ycor()
    y += 20
    paleta_B.sety(y)

def paleta_B_abajo():
    y = paleta_B.ycor()
    y -= 20
    paleta_B.sety(y)

#Asignaciones del teclado
wn.listen()
wn.onkeypress(paleta_A_arriba, "w")
wn.onkeypress(paleta_A_abajo, "s")
wn.onkeypress(paleta_B_arriba, "Up")
wn.onkeypress(paleta_B_abajo, "Down")

#Bucle principal del juego
while True:
    wn.update()

    #Movimieto de la pelota
    Pelota.setx(Pelota.xcor() + Pelota.dx)
    Pelota.sety(Pelota.ycor() + Pelota.dy)

    #Comprobando el borde
    if Pelota.ycor() > 290:
        Pelota.sety(290)
        Pelota.dy *= -1

    if Pelota.ycor() < -290:
        Pelota.sety(-290)
        Pelota.dy *= -1

    if Pelota.xcor() > 390:
        Pelota.goto(0, 0)
        Pelota.dx *= -1
        puntaje_a += 1
        pen.clear()
        pen.write("Jugador A: {}    Jugador B: {}".format(puntaje_a, puntaje_b), align="center", font=("Console", 24, "normal"))

    if Pelota.xcor() < -390:
        Pelota.goto(0, 0)
        Pelota.dx *= -1
        puntaje_b += 1
        pen.clear()
        pen.write("Jugador A: {}    Jugador B: {}".format(puntaje_a, puntaje_b), align="center", font=("Console", 24, "normal"))

    #Colision
    if (Pelota.xcor() > 340 and Pelota.xcor() < 350) and (Pelota.ycor() < paleta_B.ycor() + 40 and Pelota.ycor() > paleta_B.ycor() - 40):
        Pelota.setx(340)
        Pelota.dx *= -1

    if (Pelota.xcor() < -340 and Pelota.xcor() > -350) and (Pelota.ycor() < paleta_A.ycor() + 40 and Pelota.ycor() > paleta_A.ycor() - 40):
        Pelota.setx(-340)
        Pelota.dx *= -1