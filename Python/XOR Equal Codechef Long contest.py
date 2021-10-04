for i in range(int(input())):
    n,x=input().split()
    n,x=int(x),int(x)
    a=list(map(int,input().split()))
    op=ma=0
    ele=0
    for j in set(a):
        if ma<a.count(j):
            ma=a.count(j)
            ele=j
    for j in a:
        if ele!=j:
            if j^x==ele:
                ma+=1
                op+=1
    print(ma, op)