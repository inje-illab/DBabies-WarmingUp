from tkinter import*
window = Tk()
result = 0

def change():
    global result
    result = int(e.get()) * 2.54
    label4['text'] = str(result)+" 센티미터"

label1 = Label(window,text = "인치를 센티미디로 변환하는 프로그램:")
label2 = Label(window,text = "인치를 입력하세요: ")
label1.grid(row=0,column=0,columnspan=3)
label2.grid(row=1,column=0)

e = Entry(window)
e.grid(row=1, column=1)

label3 = Label(window,text = "변환결과 :")
label4 = Label(window,text = str(result)+" 센티미터")

label3.grid(row=2,column=0)
label4.grid(row=2,column= 1)

b1 = Button(window,text = "변환",command = change)
b1.grid(row=3, column= 1)

window.mainloop()