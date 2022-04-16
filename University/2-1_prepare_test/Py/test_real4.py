americano = 2000
cafelatte = 3000
capuchino = 3500

won = 100000

num1 = int(input("아메 판매 개수"))
num2 = int(input("라떼 판매 개수"))
num3 = int(input("카푸치노 판매 개수"))

sum = (americano*num1) + (cafelatte*num2) + (capuchino*num3)
carr = sum - won

print("총 매출 = ", sum, "원입니다.")
print("재료비는 ", won,"입니다.")
print("차액은" , carr)
if carr >= 0:
    print("흑자입니다.")
else:
    print("적자입니다.")
