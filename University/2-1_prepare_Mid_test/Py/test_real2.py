#집 + 창문 그리기
import turtle
t = turtle.Turtle()
t.shape("turtle")
t.speed(0)
#지붕
t.fd(100)
t.left(120)
t.fd(100)
t.left(120)
t.fd(100)

#몸통
t.left(30)
t.fd(100)
t.left(90)
t.fd(100)
t.left(90)
t.fd(100)
t.left(90)
t.fd(100)

#창문을 위한 코드
t.up()#이동
t.goto(100/3 , -100/3)
t.down()

#창문 그리기
t.left(90)
t.fd(100/3)
t.left(90)
t.fd(100/3)
t.left(90)
t.fd(100/3)
t.left(90)
t.fd(100/3)


turtle.mainloop()