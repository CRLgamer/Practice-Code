import time
import random

# Generate a random integer between 1 and 10 (inclusive)
random_integer = random.randint(1, 10)
print(random_integer)
i = 0
while (i<5):
  guess2 = int(input("Enter your guess: "))
  if (guess == random_integer):
    print("Your are correct")
    break
  print("Wrong Guess. Try again. "
  print(f"{i=}")
  i = i + 1
