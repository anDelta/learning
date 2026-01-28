from random import randint

wins = 0

print("=-" * 15)
print("LET'S PLAY EVEN OR ODD")
print("=-" * 15)

while True:
    player = int(input("Enter a number: "))

    while player < 0:
        print("Please, enter a positive number!")
        player = int(input("Enter a number: "))

    computer = randint(0, 10)
    choice = input("Even or odd? [E/O] ").upper().strip()

    while choice not in "EO":
        print("Please choose either even or odd.")
        choice = input("Even or odd? [E/O] ").upper().strip()

    result = "EVEN" if (player + computer) % 2 == 0 else "ODD"
    total = player + computer

    print(f"You chose {player}, the computer chose {computer}.")
    print(f"The total is {total} — {result}")

    if result[0] != choice:
        print("You lost!")
        print("=-" * 15)
        break
    else:
        print("You won!")
        print("Let's play again...")
        print("=-" * 15)
        wins += 1

print(f"Game over! You won {wins} time(s).")
