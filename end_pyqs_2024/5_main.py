"""
Write a Python program that prompts the user to input a specific
character or word to search for. The program should then search for the
given context within the text and return the number of occurrences found
to the console
"""

# Sample text for demonstration (you can replace this with any input)
text = input("Enter the text: ")

# Taking the word/character to search for
search_term = input("Enter the character or word to search for: ")

# Edge case: checking for empty input
if not search_term:
    print("You must enter a non-empty character or word.")
else:
    count = 0
    search_len = len(search_term)
    # Count the occurrences
    for i in range(len(text) - search_len):
        if text[i : i + search_len] == search_term:
            count += 1
    # Display the result
    print(f"The term '{search_term}' occurred {count} time(s) in the text.")
