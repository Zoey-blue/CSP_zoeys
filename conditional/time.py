# Zoey Sosa, how to get the Time of Day python
    #import time
#first instance of time in programming 
    #first_time = time.gmtime()
#print(first_time)

#current tiem in seconds 
    #current = time.time()
#print(current) #seconds since Jan 1 1970

#Current date and time like we see it normally 
    #now=time.ctime(current)
#print(now)

#get just a part of the time
    #local_time = time.localtime(current)
    #day=local_time.tm_wday
    #hour = local_time.tm_hour #military time (0-23)
#print(hour)

import time

current = time.time()

local_time = time.localtime
hour = local_time.tm_hour

if hour <=12:
    print("good moning")
elif hour <=17:
    print("good afternoon")
else:
    print("good evening")