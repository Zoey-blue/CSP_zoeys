# Zoey sosa , finance calculator update python 
def info(cost, income, type):
    percentage= cost/income *100
    print(f"your {type} is ${cost:.2f} rent which is,{percentage}%, of your income")

def user(type):
    quesition = "what is your monthly " + type + "?\n"
    return float(input(quesition))
income = user("income")
rent = user("rent")
utilities= user("utilities")
groceries= user("groceries")
transportation= user("transportation")
spending= user ("spending")
saving= user("saving")

info(rent, income, "rent")
info(utilities, income, "utilites")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(rent, income, "rent")
info(saving, income, "saving")
info(spending, income, "spending")
