

def selectionSort(list1):

    for i in range(len(list1)-1):
        min=list1[i]
        loc=i
        for j in range(i+1,len(list1)):
            if(min>list1[j]):
                min=list1[j]
                loc=j
        list1[i],list1[loc]=list1[loc],list1[i]

    return list1

list1=[]
length = int(input("enter length of arrar: "))
for i in range(length):
    list1.append(int(input("enter element:")))

ans =selectionSort(list1)
print(ans)