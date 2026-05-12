binary = input()

# Please write your code here.
ans = 0
digit = 1

for i in range(len(binary)-1, -1,-1):
    ans += digit * int(binary[i])
    digit *= 2
print(ans)