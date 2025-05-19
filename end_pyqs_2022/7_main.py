"""
Write a program
in Python to read two positive integers as
base and exponent from the user. Find the
resultant value by evaluating the base to its

exponent. (Ex. 23 = 8, 2 is the base and 3
is the exponent).
"""

base = int(input("Enter the base (positive integer): "))
exponent = int(input("Enter the exponent (positive integer): "))

# Check if both are positive
if base > 0 and exponent > 0:
    result = base ** exponent
    print(f"{base} raised to the power {exponent} is: {result}")
else:
    print("Please enter positive integers only.")