n = 30
i = 0
result = ''

while n != 0:
    result = result + str(n % 2)
    i = i + 1
    n = n // 2

result = result[::-1]

print(result)
