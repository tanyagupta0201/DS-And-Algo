#Converts a binary number from user into decimal
#Author: joe7898
#Date modified: 5/10/21

def binary_to_decimal(binary):
    i,integer = 0,0
    size = len(binary)
    while i < len(binary):
        integer += int(binary[size - 1 - i])*pow(2,i)
        i+=1
    print(integer)

number = str(input("Please enter a binary number using 1s and 0s: "))
binary_to_decimal(number)
