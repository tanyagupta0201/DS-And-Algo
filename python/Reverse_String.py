# PROGRAM OF A REVERSE STRING
# AUTHOR: SAURABH GUPTA
# DATE: 14/10/2021




def newStack():
    stack=[]
    return stack
def size(stack):
    return len(stack)
def isEmpty(stack):
    if size(stack) == 0:
        return true
def push(stack,item):
    stack.append(item)
def pop(stack):
    if isEmpty(stack): return
    return stack.pop()
def reverse(string):
    n = len(string)
    stack = newStack()
    for i in range(0,n,1):
        push(stack,string[i])
 
    string=""
    for i in range(0,n,1):
        string += pop(stack)
    return string
string = input("Enter the string:\n")
string = reverse(string)
print("Reversed string is :\n" + string)