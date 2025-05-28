# File: sample.txt
# Objective: Count number of lines in the file

file = open("C:\\Users\\😂😂\\sample.txt", "r")
data = file.read()
lines = data.split('\n')
print("Number of lines present in a file :", len(lines))

