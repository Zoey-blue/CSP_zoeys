#zoey sosa, 

#What is a loop? 
 #a section of code tthat repeates multiple times

#What are the two types of loops?
    #for loop
nums= [12,3,66,7,3,3,2]

for num in nums:
    print (num)

    #while loop
x=0

while x <10 :
    print(x)
    x+=1

#What is iteration
    # that specific instance of the loop
    #iteration the amount of times you are looping through 

#What are lists? 
nums = [1,2,3,4,5,6,7,6]
siblings = ["alex", "katie", "anderw", "vienna", "tia"]
print(nums)# prints whole list is ugly
print(siblings[3])#prints 1 item from the list

siblings[7] ="jake"
siblings.pop(5)
siblings.insert(1,"jayshree")
siblings.insert(2,["joe", "Noah", "Zee"])
print(siblings)


#How do you make lists in python? 
#1 [] use braces 
#2 add in items with correct data types 
#3 a coma between everything 

#How do you make for loops in python? 
for sibling in siblings:
    print(sibling)

for x in range (1,101, 20):
    print(x)

#How do you make while loops in python?
import random 
x = 1 #varible to keep count of iteration
goose = random.randint(1,20)

while x <=20:
    if x == goose:
    print("goose")
    break # tells the loop to stop 
else :
    print("duck")
    x+=1




#How do you make lists in C?
#How do you make for loops in C?
#How do you make while loops in C?