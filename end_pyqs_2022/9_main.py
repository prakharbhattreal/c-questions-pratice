import os

# File name
filename = "C:\\Users\\😂😂\\8_main.py"

# Check if the file exists
if os.path.exists(filename):
    size = os.path.getsize(filename)
    print(f"Size of '{filename}' is {size} bytes.")
else:
    print(f"File '{filename}' not found.")
