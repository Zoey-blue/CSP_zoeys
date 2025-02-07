# Zoey sosa , finance calculator python 

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
# calculate percent income of rent (rent/income *100) (variable)
rent_percentage= rent/income *100
# calculate percent income of utilites (utilites/income *100) (variable)
utilities_percentage= utilities/income *100
# calculate percent income of groceries (groceries/income *100) (variable)
groceries_percentage= groceries/income *100
# calculate percent income of transportation (transportation/income *100) (variable)
transportation_percentage= transportation/income *100
# calculate percent income of spending (spending/income *100) (variable)
spending_percentage= spending/income *100
# calculate percent income of savings (savings/income *100) (variable)

# your rent is $XX.XX which is XX% of your income. (print)
print("your rent is $", rent, " , which is" , rent_percentage, "of your income")
# your utilites is $XX.XX which is XX% of your income. (print)
print("your utilities is $", utilities, " , which is" , utilities_percentage, "of your income")
# your groceries is $XX.XX which is XX% of your income. (print)
print("your groceries is $", groceries, " , which is" , groceries_percentage, "of your income")
# your transportation is $XX.XX which is XX% of your income. (print)
print("your transprtation is $", transportation, " , which is" , transportation_percentage, "of your income")
# your savings is $XX.XX which is XX% of your income. (print)
print("your savings is $", saving, " , which is" , savings_percentage, "of your income")
# your spending is $XX.XX which is XX% of your income. (print)