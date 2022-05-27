#책에 적힌 소스코드에는 포함되어있지 않지만
#from tkinter import filedialog, from tkinter import messagebox를 해야 에러가 뜨지 않음

from tkinter import *
from tkinter import filedialog

window = Tk()
TextBox = Text(window)

def open():
    file = filedialog.askopenfile(parent=window, mode='r')
    if file != None:
        lines = file.read()
        text.insert('1.0', lines)
        file.close()

def save():
    file = filedialog.asksaveasfile(parent=window, mode='w')
    if file != None:
        lines = text.get('1.0', END + '-1c')
        file.write(lines)
        file.close()

def exit():
    if text.askokcancel("Quit", "종료하시겠습니까?"):
        window.destroy()

def about():
    label = text.showinfo("About", "메모장프로그램")

def delete():
    text.delete(SEL_FIRST, SEL_LAST) # 텍스트박스 내용 중 선택된 부분 삭제

def cut():
    global es
    es = text.get(SEL_FIRST,SEL_LAST)
    text.delete(SEL_FIRST,SEL_LAST)

def copy(): 
    global es
    es = text.get(SEL_FIRST, SEL_LAST) # 텍스트박스 내용 중 선택된 부분 복사

def paste():
    global es
    text.insert(INSERT, es)


window.title("갱의 메모장")

#글자를 입력할 곳
text = Text(window, height=50, width=100)
text.pack()

#위에 메뉴바
menu = Menu(window)
window.config(menu=menu)

#메뉴바에 들어가는 거 중 하나
filemenu = Menu(menu)
menu.add_cascade(label="파일", menu=filemenu)
#그 안의 내용들
filemenu.add_command(label="열기", command=open)
filemenu.add_command(label="저장하기", command=save)
filemenu.add_command(label="종료", command=exit)

#메뉴바에 들어가는 거 중 둘
editmenu = Menu(menu)
#그 안에 내용들
editmenu.add_command(label="cut", command = cut)
editmenu.add_command(label="copy",command= copy)
editmenu.add_command(label="paste", command= paste)
editmenu.add_command(label="delete",command = delete)

menu.add_cascade(label="Edit",menu = editmenu)

helpmenu = Menu(menu)
menu.add_cascade(label="도움말", menu=helpmenu)
helpmenu.add_command(label="프로그램 정보", command=about)

#스크롤바는 포기

window.mainloop()