import random

while True:
    dice = random.randint(1, 6)
    print('You want to roll the dice?')
    print('1. Yes')
    print('2. No')
    choice = int(input())
    if choice == 1:
        print('Your dice stopped at ' + str(dice))
        print('\n')
    elif choice == 2:
        break
