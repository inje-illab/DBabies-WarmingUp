#3장 거스름돈의 동전의 개수를 구하는 문제
get_money = int(input("투입한 돈: "))
cost = int(input("물건값: "))

remain_money = get_money - cost
print("거스름 돈 " , remain_money)

cnt =0
while remain_money > 500:
    remain_money -= 500
    cnt+=1
print("500원 동전의 개수: ", cnt) 

cnt=0
while remain_money > 0:
    remain_money -= 100
    cnt+=1
print("100원 동전의 개수: ", cnt)