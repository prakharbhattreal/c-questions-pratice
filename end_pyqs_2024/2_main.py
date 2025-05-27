# Write a program in python to capitalize the first and last character of each
# word in a string.
# input: welcome to graphic era hill university
# output:WelcomE TO GraphiC ErA HilL UniversitY

sentence = input("Enter a sentence :")

words = sentence.split(' ')

capitalize_words = []

for word in words:
    lenWord = len(word)
    if lenWord>0:
        capitalize_word=word[0].upper()+word[1:lenWord-1]+word[lenWord-1].upper()
        capitalize_words.append(capitalize_word)

new_sentence = ' '.join(capitalize_words)

print(new_sentence)