# Write a python program to find sum of following series :
# 1-3+5-7 upto n terms:

n = int(input("Enter n:"))
total = 0
sign = 1
current_n = 1
for i in range(n):
    total += sign * current_n
    sign *= -1
    current_n += 2

print(f"Sum of the series up to {n} terms is: {total}")