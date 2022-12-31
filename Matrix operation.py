print("Matrix A")
r=int(input("Number of rows : "))
c=int(input("Number of columns : "))
A=[[0 for j in range(c)]for i in range(r)]
for i in range(r):
    for j in range(c):
        A[i][j]=int(input("Enter elements : "))
print("\nMatrix A = ",A)
print("\nMatrix B")
p=int(input("Number of rows : "))
q=int(input("Number of columns : "))
B=[[0 for j in range(q)]for i in range(p)]
for i in range(p):
    for j in range(q):
        B[i][j]=int(input("Enter elements : "))
print("\nMatrix B = ",B)
result=[[0 for j in range(c)]for i in range(r)]

def add():
    for i in range(r):
        for j in range(c):
            result[i][j]=A[i][j]+B[i][j]
    print("Addition of two matrices is : ",result)

def sub():
    for i in range(r):
        for j in range(c):
            result[i][j]=A[i][j]-B[i][j]
    print("Subtraction of two matrices is : ",result)

def mul():
    for i in range(r):
        for j in range(c):
            for k in range(r):
                result[i][j]+=A[i][k]*B[k][j]
    print("Multiplication of two matrices is : ",result)

def transpose():
    z=input("select matrix (A/B) : ")
    for i in range(r):
        for j in range(c):
            if z==A:
                result[j][i]=A[i][j]
            else:
                result[j][i]=B[i][j]
    print("Transpose of matrix ",z," is : ",result)

def menu():
    print("\n_________MENU_________\n")
    print("1.Addition of two matrices\n2.Subtraction of two matrices\n3.Multiplication of two matrices\n4.Transpose of a matrix\n5.Exit")
menu()
while True:
    ch=int(input("Enter your choice : "))
    if ch==1:
        if r==p and c==q:
            add()
        else:
            print("Invalid matrix operation")
    elif ch==2:
        if r==p and c==q:
            sub()
        else:
            print("Invalid matrix operation")
    elif ch==3:
        mul()
    elif ch==4:
        if r==p and c==q:
            transpose()
        else:
            print("Invalid matrix operation")
    elif ch==5:
        print("THANK YOU !!!")
        False
        break
    else:
        print("Enter valid choice :( ")  
