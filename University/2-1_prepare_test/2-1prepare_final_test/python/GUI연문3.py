from tkinter import*
import random
window = Tk()

rand_num = random.randint(1,100)

def put_num():
    global rand_num
    if(rand_num == int(e.get())):
        label1['text'] = "정답입니다~"
    elif(rand_num < int(e.get())):
        label1['text'] = "너무 높아요!!"
    else:
        label1['text'] = "너무 낮아요!!"

def regame():
    global rand_num
    rand_num = random.randint(1,100)
    label1['text'] = "게임을 다시 실행했습니다."


label1 = Label(window, text =" ")
label1.grid(row=0,column=0,columnspan=3)

e = Entry(window)
e.grid(row=1,column=0,columnspan=3)

b1 = Button(window,text ="숫자를 입력", command= put_num)
b2 = Button(window,text = "게임을 다시 실행",command=regame)

b1.grid(row=2,column=0)
b2.grid(row=2,column=1)

window.mainloop()