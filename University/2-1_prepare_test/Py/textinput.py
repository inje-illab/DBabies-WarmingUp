#거북이 실행 전에 텍스트가 나온다

import turtle
t = turtle.Turtle()
t.shape("turtle")

num = int(turtle.textinput("", "몇각형을 원하시나요"))

for i in range(num):
    t.forward(100)
    t.left(360/num)

turtle.mainloop()