#원과 다각형 그리기
import turtle
t = turtle.Turtle()
t.shape("turtle")

t.forward(100)
for i in range(5):
    t.left(60)
    t.forward(100)
t.circle(100)

turtle.mainloop()