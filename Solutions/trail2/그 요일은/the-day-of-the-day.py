m1, d1, m2, d2 = map(int, input().split())
A = input()

# Please write your code here.
days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = {"Mon":0, "Tue":1, "Wed":2, "Thu":3, "Fri":4, "Sat":5, "Sun":6}  # key: 요일, value: 나머지값

m1_days = sum(days[:m1-1]) + d1
m2_days = sum(days[:m2-1]) + d2

diff = m2_days - m1_days

ans = diff // 7

# 이미 해당 요일이 지났다 -> 1 추가
if diff % 7 >= week[A]:
    ans += 1

print(ans)