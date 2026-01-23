from random import randint

count = 0

print("I am your computer...")
print("I have just thought of a number between 0 and 10.")
print("Can you guess what it is?")

computer = randint(0, 10)
guess = int(input("What is your guess? "))

while guess != computer:
    while guess < 0 or guess > 10:
        guess = int(input("The number must be between 0 and 10! What is your guess? "))

    count += 1

    if guess > computer:
        print("Lower... Try again")
        guess = int(input("What is your guess? "))
    else:
        print("Higher... Try again")
        guess = int(input("What is your guess? "))

print(f"You got it in {count + 1} attempts. Congratulations!")
