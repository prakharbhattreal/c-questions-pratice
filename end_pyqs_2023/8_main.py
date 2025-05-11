# Demonstration of Python operators

a = 5
b = 2

# Exponential operator
exp_result = a ** b    # 5^2 = 25

# Integer division
int_div_result = a // b  # 5 // 2 = 2

# Short-circuit behavior
x = False
y = True

# 'and' short-circuits: If first is False, second is not evaluated
and_result = x and (a / 0)  # Safe: (a / 0) is not executed

# 'or' short-circuits: If first is True, second is not evaluated
or_result = y or (a / 0)    # Safe: (a / 0) is not executed

# Display results
print("Exponential (5 ** 2):", exp_result)
print("Integer Division (5 // 2):", int_div_result)
print("Short-circuit AND:", and_result)
print("Short-circuit OR:", or_result)


# ABout short circuit operator
"""
    # What is Short-circuit Operator?
    # Ans:- Short-circuit operators are logical operators (and, or) that stop evaluating expressions as soon as the result is known, which makes the program faster and avoids unnecessary or dangerous computations (like dividing by zero).

    🔹 and Operator:
    Evaluates left to right.
    If the first operand is False, it does not evaluate the second one.
    Because in A and B, the result will always be False if A is False.
    Code -
"""
a = False

# Safe due to short-circuit
result = a and (1/0)
print(result)  # Output: False
# Explanation: Since a is False, Python skips evaluating b (which would crash the program).

"""
    🔹 or Operator:
    Evaluates left to right.
    If the first operand is True, it does not evaluate the second one.
    Because in A or B, the result is True if A is True.
    code -
"""
a = True

# Safe due to short-circuit
result = a or (1/0)
print(result)  # Output: True