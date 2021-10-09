#Author: Shantanu Sharma
#Date Modified: 8th October 2021

def gcd (x, y):  
    if (y == 0):   
        return x   
    else:  
        return gcd (y, x % y)  
x = int (input ("Enter the first number: "))    
y = int (input ("Enter the second number: "))    
num = gcd(x, y)  
print("GCD of two number is: ")  
print(num)  
