def add():
  x = float(input("Enter the first number: ")
  y = float(input("Enter the second number: ")
  total = x + y
  print(f"{x} + {y} = {total}")
  return total

def subtract():
  x = float(input("Enter the first number: ")
  y = float(input("Enter the second number: ")
  total = x - y
  print(f"{x} + {y} = {total}")
  return total

def multiply():
  x = float(input("Enter the first number: ")
  y = float(input("Enter the second number: ")
  total = x * y
  print(f"{x} + {y} = {total}")
  return total

def divide():
  x = float(input("Enter the first number: ")
  y = float(input("Enter the second number: ")
  total = x / y
  print(f"{x} + {y} = {total}")
  return total

print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

oper = int(input("Choose the operation: "))

if oper == 1:
  add()
elif oper == 2:
  subtract()
elif oper == 3:
  multiply()
elif oper == 4:
  divide()
else:
  print("Invalid Number. Please try again.)
