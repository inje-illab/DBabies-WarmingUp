from operator import index
from tkinter import*
window = Tk()
total = 100

def add():
    global total
    total += int(entry.get())
    label2['text'] = str(total)

def minus():
    global total
    total -= int(entry.get())
    label2['text'] = str(total)

def Init():
    global total
    total = 100
    label2['text'] = str(total)

label1 = Label(window,text = "현재 합계 :    ")
label2= Label(window,text = total)

label1.grid(row=0, column=0)
label2.grid(row = 0, column=1,columnspan=2)

entry = Entry(window)
entry.grid(row=1,column=0,columnspan=3)

b1 = Button(window,text = "더하기(+)", command= add)
b2 = Button(window,text = "빼기(-)",command=minus)
b3 = Button(window,text = "초기화",command=Init)

b1.grid(row= 2, column= 0)
b2.grid(row=2,column=1)
b3.grid(row=2,column=2)

window.mainloop()