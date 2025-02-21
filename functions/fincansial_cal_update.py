# Zoey sosa , finance calculator update python 
def info(cost, income, type):
    percentage= cost/income *100
    print(f"your {type} is ${cost:.2f} rent which is,{percentage}%, of your income")

def info():
    print(f"what is your {}?\n")
# print statment that welcomes user and tells what program dose

# ask what their income is (varible an input)
income= float(input("what is your income?\n"))
# ask what their rent is (varible an input)
rent= float(input("what is your rent?\n"))
# ask what their utlitites is (varible an input)
utilities= float(input("what is your utilities?\n"))
# ask what their groceries is (varible an input)
groceries= float(input("what is your groceries?\n"))
# ask what their transportation is (varible an input)
transportation= float(input("what is your transportation?\n"))
# calculate savings as 10% of income (income*.1) (variable)
saving= income*.1
# calculate spending as income-saving-rent-utilites-groceries-transportation (variable)
spending= income-saving-rent-utilities-groceries-transportation

info(rent, income, "rent")
info(utilities, income, "utilites")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(rent, income, "rent")
info(saving, income, "saving")
info(spending, income, "spending")