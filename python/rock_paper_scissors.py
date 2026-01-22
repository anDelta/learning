from time import sleep
from random import choice

print('''Your options:
[ 0 ] ROCK
[ 1 ] PAPER
[ 2 ] SCISSORS''')

moves = {
    0: "Rock",
    1: "Paper",
    2: "Scissors"
}

rules = {
    (0, 2): "PLAYER WINS",
    (1, 0): "PLAYER WINS",
    (2, 1): "PLAYER WINS"
}

player = int(input("Choose your move: "))

while player not in moves:
    print("Invalid move!")
    player = int(input("Choose your move: "))

computer = choice(list(moves.keys()))

print("RO")
sleep(1)
print("CK")
sleep(1)
print("!!!")

print("-=" * 11)
print(f"Computer chose {moves[computer]}")
print(f"Player chose {moves[player]}")
print("-=" * 11)

if player == computer:
    print("DRAW")
elif (player, computer) in rules:
    print("PLAYER WINS")
else:
    print("COMPUTER WINS")
