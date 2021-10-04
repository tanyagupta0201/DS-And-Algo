#How long will the last patient have to wait foe its turn. If doctore given 10 minute to every patient only. Every patient arrives at time X as input by the user.
#Author:Shantanu Sharma
#Date Modified:4th October 2021
for i in range(int(input("Enter the number of test cases : "))):
    p=int(input("Enter number of patients: "))
    X=int(input("Time at which every patient arrives: "))
    print("The last patient had to wait for {} minutes".format(((p-1)*10)-((p-1)*X)))