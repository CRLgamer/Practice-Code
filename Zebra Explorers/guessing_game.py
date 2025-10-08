import time
import random

# Generate a random integer between 1 and 10 (inclusive)
random_integer = random.randint(1, 10)
i = 0
while (i<5):
  guess = int(input("Enter your guess: "))
  if (guess == random_integer):
    print("Your are correct")
    break
    
  if guess > random_integer:
    number = "Smaller"
  elif guess < random_integer:
    number = "Larger"
    
  print(f"Wrong Guess. Try again. Hint: Number is {number}"
  print(f"{i=}")
  i = i + 1
  
print(random_integer)
