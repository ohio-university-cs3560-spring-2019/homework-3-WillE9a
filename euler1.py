# Will Eshbaugh
# we175615@ohio.edu
# Program to complete problem 1 of ProjectEuler

sum = 0 
for i in range(0, 1000):
    if(i % 3 == 0):
        sum += i
    elif(i % 5 == 0):
        sum += i
print "Sum: ", sum 