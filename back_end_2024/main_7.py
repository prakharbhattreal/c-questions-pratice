# Develop a python program to execute various operations on string literals such as length,
# upper, lower, replace. Also print the substring trom string,

# Input from user
text = input("Enter a string: ")

# 1. Length of the string
print("Length of the string:", len(text))

# 2. Convert to uppercase
print("Uppercase:", text.upper())

# 3. Convert to lowercase
print("Lowercase:", text.lower())

# 4. Replace part of the string
old = input("Enter the word to replace: ")
new = input("Enter the new word: ")
print("String after replacement:", text.replace(old, new))

# 5. Substring (slicing) — example: first 5 characters
start = int(input("Enter starting index for substring: "))
end = int(input("Enter ending index for substring: "))
print("Substring from index", start, "to", end, "is:", text[start:end])
