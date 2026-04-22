import random
from platform import system

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
game_image = [rock,paper,scissors]
user_choice = int(input("Enter 0 for rock, 1 for paper or 2 for scissors:\n"))
if 0<= user_choice <=2:
    print("You chose:")
    print(game_image[user_choice])
else:
    print("Choose a valid option.")
system_choice = random.randint(0,2)
print("Computer chose:")
print(game_image[system_choice])
if user_choice == system_choice:
    print("it's a tie!")
elif user_choice == 0 and system_choice == 1:
    print("You lose")
elif user_choice == 0 and system_choice == 2:
    print("You win!")
elif user_choice == 1 and system_choice ==0:
    print("You win!")
elif user_choice == 1 and system_choice == 2:
    print("You lose!")
elif user_choice == 2 and system_choice == 0:
    print("You lose!")
elif user_choice == 2 and system_choice == 1:
    print("You win!")
