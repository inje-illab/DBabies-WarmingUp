#랜덤으로 수를 받고 그리기 p.170
import random
import turtle
t = turtle.Turtle()
t.shape("turtle")

for i in range(20):
    num = random.randint(1,100)
    t.forward(num)

    angle = random.randint(-180,180)
    t.left(angle)
