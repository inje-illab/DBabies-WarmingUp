from tkinter import*
from turtle import clear
window = Tk()
window.title("갱의 계산기")

#화면창
entry = Entry(window, width =33,bg="yellow",fg = "black")
entry.grid(row=0,column=0,columnspan=5)


#버튼 만들기
button_list = ['7','8','9','/','C',
            '4','5','6','*',' ',
            '1','2','3','-',' ',
            '0','.','=','+',' ']

#버튼 클릭시 동작
def click(key):
    if key == '=':
        result = eval(entry.get())
        s = str(result)
        entry.insert(END,"= "+s)

    elif key == 'C':
        entry.delete(0,END) 

    else:
        entry.insert(END,key)

#버튼 추가
r=1
c=0
for bt in button_list:
    def process(t=bt):
        click(t)

    Button(window,text = bt, width = 5,command= process).grid(row= r,column=c)
    c+=1
    if c == 5:
        c= 0
        r+=1

window.mainloop()