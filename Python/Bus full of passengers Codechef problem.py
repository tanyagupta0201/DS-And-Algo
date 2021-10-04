for i in range(int(input())):
    n,m,q=input().split()
    n,m,q=int(n),int(m),int(q)
    x=0
    l=[]
    c=0
    while(x<=m and q>0):
        s=input()
        if s[0]=="+":
            if s[2] not in l and x+1<=m and int(s[2])<=n:
                l.append(s[2])
                x=x+1
                q=q-1
            else:
                c=1
                q=q-1
                print("Inconsistent")
                break
        if s[0]=="-":
            if s[2] not in l or x-1<0 or int(s[2])>n:
                c=1
                q=q-1
                print("Inconsistent")
                break
            else:
                x=x-1
                q=q-1
                
    if c==0:
        print("Consistent")
    else:
        while(q>0):
            q=q-1
            s=input()
                