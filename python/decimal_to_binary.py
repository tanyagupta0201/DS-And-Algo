#Converts a decimal number from user into binary
#Author: joe7898
#Date modified: 5/10/21

def decimal_to_binary(decimal):
    binary = bin(decimal).replace("0b", "")
    print(binary)

number = int(input("Please enter a decimal number: "))
decimal_to_binary(number)
