import turtle
import math

t = turtle.Turtle()
t.shape("turtle")

t.color("red", "yellow")

for i in range(180+360):
    sine = math.sin(math.pi* i /180)
    t.goto(i, sine*100)

turtle.mainloop()