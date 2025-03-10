# Zoey Sosa, FizzBuzz python

for x in range(0,51):
    if x % 3 == 0 and x % 5 == 0:
        print("fizzbuzz")
    elif x % 3 == 0:
        print("Fizz")
    elif x % 5 == 0:
        print("buzz")
    else:
        print(x)