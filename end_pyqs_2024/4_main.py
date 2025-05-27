'''
Write a python program-to replace space with a given character.
Example : A user has provided the string "D t C mpBI ckFrid ys le" and
the character "a", and the output will be "DataCampBlackFridaySale"
'''

user_input = input("Enter the string: ")  # Example: "D t C mpBI ckFrid ys le"
replacement_char = input("Enter the character to replace spaces: ")  # Example: "a"

# Validating that the replacement character is only one character
if len(replacement_char) != 1:
    print("Please enter a single character only.")
else:
    replaced_string = user_input.replace(' ', replacement_char)
    print("Output:", replaced_string)
