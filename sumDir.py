# Will Eshbaugh
# Homework 5
# Python script called by a bash script to output total number of lines, words, and characters in a directory
# using python 2

file = open("newtempfile.txt", "r")
file.readline()

for line in file:
    x = line
str_list = x.split(' ')  #grabs last line of file and creates a list seperated by spaces

print"Lines: ", str_list[3]
print"Words: ", str_list[6]
print"Characters: ", str_list[8]