m1, d1, m2, d2 = map(int, input().split())

# Please write your code here.
days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
m1_days = sum(days[:m1-1]) + d1
m2_days = sum(days[:m2-1]) + d2
var = m2_days - m1_days

print(week[var % 7])
