#Zoey Sosa, conditional notes python
name = input("what is your name?:\n")
#What puts something inside of the “if” statement?
if name == "LaRose":
    print("hi Mrs. LaRose")
else: #this happens if the codition is false
    print(f"hello {name}!")
#What do if statements do?
    #checks a condition and it it is true it will do a thing
if name == "LaRose": # <=- this is the condition 
    print("hi Mrs. LaRose") #<=this is what it does if true 

#What are boolean statements? 
if name == "LaRose": # <= this is the boolean statement. it is either true or false
    print("hi Mrs. LaRose")

#What do else statements do?
else: # if the boolean is false, the else statemnet happens 
    print(f"hello {name}!")

#What kind of statement do you use if you have more than 2 needed outcomes?
num = 2
#computers read top to bottom, check the least likely first 
if num == 0: #<= if always starts the conditional 
    print("There are none.")
elif num == 1: #everything inbetween should be elif 
    print("There is one.")
elif num <10:
    print("There is a few")
else : # <= else always ends the conditional 
    print("There are many")

#What do each of the different symbols mean in conditionals?

#< less than
#> greater than
#<= less then or equl to 
#>= greater then or equl to 
#== equal to 
#=== * dosent exsist in python 
#! not 

#What are the 3 logical operators?
if num <10 and num > 5: # And means that both booleans must be true 
    print("this is a big single digit number")

if num <10 or num > 5: # or means that one boolean must be true 
    print("this is a big single digit number")

elif not num < 10: # not changes to check if false
    print("this is a big single digit number")
#What are logical operators for?
    #Allows the code to handle more difficult quesittions . . . 
    #increases compelexity 
#What does a nested conditional statement do?
if num <10:
    if num  ==8: 
        print("this prints at 8")
    else:
        print("the number is less than 10")

#How do you write an if statement in C?
#How do you write else statements in C?
#How do you write elif/ else if statements in C?
#How do you write the 3 logical operators in C?
