def add():
  total = x + y
  print(f"{x} + {y} = {total}")
  return total

def subtract():
  total = x - y
  print(f"{x} - {y} = {total}")
  return total

def multiply():
  total = x * y
  print(f"{x} * {y} = {total}")
  return total

def divide():
  total = x / y
  print(f"{x} / {y} = {total}")
  return total

def mod():
  total = x % y
  print(f"{x} % {y} = {total}")
  return total

print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("5. Mod")

oper = int(input("Choose the operation: "))
x = float(input("Enter the first number: ")
y = float(input("Enter the second number: ")

if oper == 1:
  add(x, y)
elif oper == 2:
  subtract(x, y)
elif oper == 3:
  multiply(x, y)
elif oper == 4:
  divide(x, y)
elif oper == 5:
  mod(x, y)
else:
  print("Invalid Number. Please try again.)
