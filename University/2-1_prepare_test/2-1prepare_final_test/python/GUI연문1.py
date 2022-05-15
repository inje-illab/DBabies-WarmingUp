from tkinter import*
window = Tk()

Label(window, text = "간단한 GUI 프로그램!").pack()
Button(window,text = "환영합니다.").pack()
Button(window,text="종료").pack()

window.mainloop()