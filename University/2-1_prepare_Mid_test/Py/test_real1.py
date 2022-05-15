import turtle
t= turtle.Turtle()
t.shape("turtle")

radius = 100

t.begin_fill()
t.fillcolor("blue")
t.circle(radius)
t.end_fill()

t.begin_fill()
t.fillcolor("red")
t.fd(30)
t.circle(radius)
t.end_fill()

t.begin_fill()
t.fillcolor("yellow")
t.fd(30)
t.circle(radius)
t.end_fill()



turtle.mainloop()