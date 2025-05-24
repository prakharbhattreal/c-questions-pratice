# sum of digit of number inputted by user in python

num=int(input("Enter a number :"))
sum=0

while num!=0:
    rem=num%10
    sum+=rem
    num=num//10

print("Sum of digit is", sum)