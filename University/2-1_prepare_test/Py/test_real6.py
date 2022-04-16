from time import time


import time

time_one = time.time()

print((int)(time_one//3600%24) ,"시")
print((int)(time_one//60%60), "분")


print("저는 \"안녕\"이라고 말했습니다.")
print("저는 '안녕'이라고 말했습니다.") 

#윤년
year = int(input("연도를 입력하시오"))
if((year %4 == 0 and year % 100 != 0) or year %400 ==0):
    print("운년입니다.")
else:
    print("운년이 아닙니다.")

