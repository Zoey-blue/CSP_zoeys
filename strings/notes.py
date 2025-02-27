# Zoey Sosa, Strings notes python

# strings is a data type that holds any info surround by quotation marks "" ' '

#note = "vienna's class"

#name = input("what is ypur first name\n").strip().capitalize()

#print(f"hello {name} welcome to my program!")
#print("this is your name "+  name)

#print(note)

sentence = "the quick brown fox jumps over the lazy dog"

#print(len(sentence))
#print(sentence[4])
start = sentence.find("brown")
length = len("brown fox")
print(sentence[start:start+length])