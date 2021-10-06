# FACTORIAL OF A NUMBER USING RECURSION
# AUTHOR: SAURABH GUPTA
# DATE: 6 OCT 2021


def factorial(n):
    fact = 1
    if n == 0:
        fact = 1
    else:
        fact = n * factorial(n - 1)
    return fact
n = int(input("Enter a number: "))
print(factorial(n))