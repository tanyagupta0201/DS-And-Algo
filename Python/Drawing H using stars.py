#We have to draw a H with stars(*) in python.
#Authur:Shantanu Sharma
#Date Modified:4th October 2021
s=""
for Row in range(0,7):    
    for Col in range(0,7):     
        if ((Col == 1 or Col == 5) or (Row == 3 and Col > 1 and Col < 6)):  
            s=s+"*"    
        else:      
            s=s+" "    
    s=s+"\n"
print(s)    

