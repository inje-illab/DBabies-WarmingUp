import turtle
t = turtle.Turtle()
t.shape("turtle")
t.color("red","yellow")

t.speed(0)

t.begin_fill()
while True:
    t.fd(100)
    t.left(170)

    if abs(t.pos()) < 1 :
        break
t.end_fill()
turtle.mainloop()

list = []
num = int(input())
list.append(num)
print(list[0])