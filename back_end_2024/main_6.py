# Write a python program to Find the largest number among the three input numbers, inputted number must be type casted to integers first.

num1 = int(input("Enter first number :"))
num2 = int(input("Enter second number :"))
num3 = int(input("Enter third number :"))

if num1 == num2 == num3:
    print("All three numbers are equal")
elif num1 >= num2 and num1 >= num3:
    print("The largest number is:", num1)
elif num2 >= num1 and num2 >= num3:
    print("The largest number is:", num2)
else:
    print("The largest number is:", num3)
