def bucket(arr):
    n=len(arr)
    buck=[]
    for i in range(10):
        buck.append([])
    for j in arr:
        ind=int(10*j)
        buck[ind].append(j)
   
    for i in range(10):
        buck[i]=sorted(buck[i])
    k=0
    for i in range(10):
        for j in range(len(buck[i])):
            arr[k]=buck[i][j]
            k=k+1
    return arr

#main
a=[]
l=int(input("no. of students"))
for i in range(l):
    c=int(input("ele"))
    a.append(c)
print(a)

b=[]
for i in range(len(a)):
    d=a[i]/100
    b.append(d)

h=bucket(b)
u=[]
for i in range(l):
    o=h[i]*100
    u.append(o)
print(u)

