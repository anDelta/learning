print("Arithmetic Progression Generator")
print("-=" * 10)

first_term = int(input("First term: "))
ratio = int(input("Common difference: "))
initial_terms = int(input("How many terms do you want to display? "))
count, total, more = 1, 0, initial_terms

while more != 0:
    total += more
    while count <= total:
        print(f"{first_term} -> ", end='')
        first_term += ratio
        count += 1
    print("PAUSE")
    more = int(input("How many more terms do you want to display? "))
print(f"Progression finished with {total} terms displayed.")
