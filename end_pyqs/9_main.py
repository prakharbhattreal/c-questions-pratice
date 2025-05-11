# Python script to capitalize alternate letters in a string
# Sample Input: "mountaineering"
# Sample Output: "MoUnTaInEeRiNg"

# Read input from the user
text = input("Enter a string: ")

# Initialize result string
result = ""

# Loop through each character by index
for i in range(len(text)):
    if i % 2 == 0:
        # Capitalize character at even index
        result += text[i].upper()
    else:
        # Keep character at odd index lowercase
        result += text[i].lower()

# Display the result
print("Modified string:", result)
