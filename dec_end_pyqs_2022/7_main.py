# Write a Python code to accept a list of integers from the user and then display the same by
# sorting it in descending order

n = int(input("Enter number of items: "))

numbers = []

for i in range(n):
    num = int(input(f"Enter {i+1} element :"))
    numbers.append(num)

# numbers.sort(reverse=True)    # simple way but for 10 marks may be this one sounds safe 

# using bubble sort for long answer
for i in range(n - 1):
    for j in range(n - 1 - i):
        if numbers[j] < numbers[j + 1]:
            numbers[j], numbers[j + 1] = numbers[j + 1], numbers[j]

print("Sorted list in descending order :", numbers)
