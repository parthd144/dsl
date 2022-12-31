marks=[]
print("If absent enter 0\n")
n=int(input("\nEnter number of students : "))
for i in range(n):
    stu=int(input("Enter marks of student in Fundamental of Data Structures : "))
    marks.append(stu)
sum1=0
for i in range(n):
    sum1+=marks[i]
avg=sum1/n

def absent():
    absent=0
    for i in marks:
        if i==0:
            absent+=1
    print("Number of absent students is : ",absent)

def maximum():
    maxi=marks[0]
    for i in marks:
        if i>maxi:
            maxi=i
    print("Highest score in class is : ",maxi)

def minimum():
    mini=marks[0]
    for i in marks:
        if i<mini:
            mini=i
    print("Lowenst score in class is : ",mini)

def freq():
    highfreq=marks[0]
    for i in marks:
        if i==highfreq:
            highfreq=i
    print("Marks with highest frequency is : ",highfreq)

def menu():
    print("\n_________SELECT AN OPTION_________")
    print("1.Calculate average score of the class\n2.Highest score in class\n3.Lowest score in class\n4.Number of absent students\n5.Marks with highest frequency\n6.Exit")

while True:
        menu()
        ch=int(input("\nEnter your choice : "))
        if ch==1:
            print("Average score of the class is : ",avg)
        elif ch==2:
            maximum()
        elif ch==3:
            minimum()
        elif ch==4:
            absent()
        elif ch==5:
            freq()
        elif ch==6:
            print("THANK YOU :)")
            False
            break
        else:
            print("....Enter valid choice....")
