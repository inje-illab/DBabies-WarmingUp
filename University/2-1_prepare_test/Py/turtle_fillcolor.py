import string
import turtle
t = turtle.Turtle()
t.shape("turtle")

list = []

for a in range(0,3):
    print(a+1,end =" ")
    list.append(input("원의 색을 입력하세요"))

t.up()
t.goto(-200,0)
t.down()
t.fillcolor(list[0])
t.begin_fill()
t.circle(100)
t.end_fill()


t.fillcolor(list[1])
t.begin_fill()
t.up()
t.goto(0,0)
t.down()
t.circle(100)
t.end_fill()

t.fillcolor(list[2])
t.begin_fill()
t.up()
t.goto(200,0)
t.down()
t.circle(100)
t.end_fill()

turtle.mainloop() 