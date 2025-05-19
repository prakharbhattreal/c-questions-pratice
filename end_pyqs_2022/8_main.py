"""
Write a python program to read a sentence
from the user and display the same by
capitalizing the first letter of each of the
words present in it to the console.

"""

# ex:- Enter a sentence :hello world
sentence=input("Enter a sentence :")

# Split the sentence into words and store in list called words {ex:- words = [hello, world]}
words = sentence.split(" ")

# list to store capitalized words
capital_words = []

# Loop through each word and capitalize the first letter
for word in words:
    if len(word)>0:
        capital_word = word[0].upper()+word[1:]
        capital_words.append(capital_word)

# Join the capitalized words into a single string (concatenate each given string, the result is returned as a new string.) {ex:- "Hello World"}
new_sentence = ' '.join(capital_words)

print(new_sentence)