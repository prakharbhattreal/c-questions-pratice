"""Write a Python program that reads the content of a text file named
Input.txt and performs text transformation operations based on user
input. The supported operations include converting the entire content to
uppercase, lowercase, or capitalizing the first letter of each word.
Additionally, ensure that the program is user-friendly and provides clear
instructions and prompts to the user."""

with open("C:\\Users\\😂😂\\input.txt", "r") as f:
    content = f.read()

    # taking input which tranformation is requried by user
    print(
        "1 to transform content in uppercase\n2 to transform content in lowercase\n3 to capitalizing the first letter of each word:"
    )
    n = int(input("Enter your choice :"))

    if n == 1:
        print("transforming whole content in uppercase\n")
        print(content.upper())
    elif n == 2:
        print("transforming whole content in lowercase\n")
        print(content.lower())
    elif n == 3:
        print("capitalizing the first letter of each word\n")
        sentences = content.split('\n')
        for sentence in sentences:
            words = sentence.split(" ")
            capilatize_words = []

            for word in words:
                if len(word) > 0:
                    capitalize_word = word[0].upper() + word[1:]
                    capilatize_words.append(capitalize_word)
            
            print(' '.join(capilatize_words))