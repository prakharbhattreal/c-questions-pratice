# File: sample.txt
# Objective: Count number of lines in the file

# 1. way (chatgpt)
# Open file in read mode
# with open("sample.txt", "r") as file:
    # line_count = 0
    # for line in file:
    #     line_count += 1

# Display the result
# print("Number of lines in sample.txt:", line_count)

# 2. Way (easy one)
with open("sample.txt", "r") as f:
    content=f.readlines()  # readlines reads all lines at once into a list
    print("Number of lines in sample.txt:", len(content))