# Step 1: Accept number of items
n = int(input("Enter number of items: "))

# Step 2: Create dictionary to store item-quantity pairs
items = {}

# Step 3: Accept items

# .strip() = remove trailing spaces (ex:- extra and unwanted whitespace)
# .lower() = convert string into lowercase
# we have done this so we can remove duplicate value which is our main target

for i in range(n):
    name = input(f"Enter name of item {i+1}: ").strip().lower()
    quantity = int(input(f"Enter quantity for '{name}': "))
    items[name] = quantity  # Automatically replaces duplicates

# Step 4: Display the dictionary without duplicates
print("\nFinal item list:")
for name, quantity in items.items():
    print(f"{name}: {quantity}")
