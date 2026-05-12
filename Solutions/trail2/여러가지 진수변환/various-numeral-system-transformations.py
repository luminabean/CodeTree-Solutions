N, B = map(int, input().split())

# Please write your code here.
ans = []

while N>=B:
    ans.append(N%B)
    N //= B

ans.append(N)
ans = ans[::-1]

for i in ans:
    print(i, end="")