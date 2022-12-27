def longest():
    n=int(input("Enter number of string : "))
    main=[]
    for i in range(n):
        word=input("Enter string"+str(i+1)+" : ")
        main.append(word)

    def len(main):
        cnt=0
        for i in main:
            cnt=cnt+1
        return cnt

    submain=[]
    for i in range(n):
        x=len(main[i])
        submain.append(x)

    max=submain[0]
    i=0
    index=i
    for i in range(n):
        if(submain[i]>max):
            max=submain[i]
            index=i
    print("Longest string is ",main[index],"\n")

def frequency():
    string=input("Enter string : ")
    char=input("Enter character to check : ")
    freq=0
    for i in string:
        if(char==i):
            freq+=1
    if(freq==0):
        print("The given character appears 0 times")
    else:
        print(char," appears ",freq," times","\n")

def palindrome():
    str1=input("Enter string : ")
    str2=str1[::-1]
    if(str1==str2):
        print(str1," is a palindrome","\n")
    else:
        print(str1," is not a palindrome","\n")

def first_app():
    index=0
    string=input("Enter string : ")
    substring=input("Enter substring : ")
    for i in string:
        index+=1
        if(i==substring):
            print(substring," first found at position ",index,"\n")
            break;

def occurrence():
    string=input("Enter string : ")
    count={}
    for i in string:
        if i in count:
            count[i]+=1
        else:
            count[i]=1
    print(count)

while True:
    print("_________MENU_________")
    choice=int(input(("1.Display longest string\n2.Check frequency of occurence\n3.Check for palindrome\n4.Check for first appearance of substring\n5.Check for occurrence of each word\n6.Exit\nEnter your choice(1/2/3/4/5/6) : ")))
    if choice==1:
        longest()
    elif choice==2:
        frequency()
    elif choice==3:
        palindrome()
    elif choice==4:
        first_app()
    elif choice==5:
        occurrence()
    elif choice==6:
        print("Thank you for using this program!")
        break
    else:
        print("Enter a valid choice.")