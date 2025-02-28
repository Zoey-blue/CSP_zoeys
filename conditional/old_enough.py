# Zoey Sosa Old Enough python

age = int(input("How old are you?:\n"))


if age >=18:
   print("You can vote!")
elif age <18 and age >= 16:
    print("You can drive!")
elif age <16 and age >= 15:
    print("You can get a learners permit")
elif age >= 4:
    print("You can go to school!")
else:
     print("too bad you aren't any of these ages")
