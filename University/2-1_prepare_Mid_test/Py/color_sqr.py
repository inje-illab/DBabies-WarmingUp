import turtle
t = turtle.Turtle()
t.shape("turtle")
t.width(3)
t.speed(0)
turtle.bgcolor("black")

colors = ["red", "purple", "blue", "green", "yellow", "orange"]

length = 10

while length < 500:
    t.forward(length)
    t.pencolor(colors[length%6])
    t.right(89)
    length += 5

turtle.mainloop()