def phbk(arr):  
    n=len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if(arr[j][0]>arr[j+1][0]):
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
    return arr
    
def bnrsearch(arr,key):
    n=len(arr)
    low=0
    high=len(arr)-1
    while(low<=high):
        mid=(high+low)//2
        if(arr[mid][0]==key):
            return arr[mid]
        elif(arr[mid][0]<key):
            low=mid+1
        else:
            high=mid-1
    print("Name not found ")
    c=int(input("Enter number"))
    arr.append([key,c])
    phbk(arr)
    return arr

def brsearch(arr,key,h,l):
    if l>h:
        print("not found")
        d=int(input("number : "))
        arr.append([key,d])
        phbk(arr)
        return arr

    mid=(l+h)//2
    if(arr[mid][0]==key):
        return arr[mid]
    elif(arr[mid][0]<key):
        l=mid+1
        return brsearch(arr,key,h,l)
    else:
        h=mid-1
        return brsearch(arr,key,h,l)
    



arr1=[["a",3829],["l",98439],["b",88894]]
a=phbk(arr1)
print(a)
key1=input("Enter the name :")
#d=bnrsearch(arr1,key1)
#print(d)
n=len(arr1)
l=0
h=n-1
e=brsearch(arr1,key1,h,l)
print(e)
