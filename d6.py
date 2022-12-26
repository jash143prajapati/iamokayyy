def partition( lis,  start, end):

    pivot = lis[start]

    cnt = 0
    i=start+1

    while(i<=end):
        if(lis[i] <=pivot):
            cnt=cnt+1
        i=i+1

    pivotIndex = start + cnt
    (lis[pivotIndex], lis[start])=(lis[start],lis[pivotIndex])

    i = start
    j = end

    while(i < pivotIndex &j > pivotIndex):

        while(lis[i] <= pivot):
            i=i+1

        while(lis[j] > pivot):
            j=j-1
        if(i < pivotIndex & j > pivotIndex): 
            (lis[i], lis[j])=(lis[j],lis[i])
    
    return pivotIndex


def quickSort(lis, start, end):


    if(start >= end): 
        return

    p = partition(lis, start, end)

    quickSort(lis, start, p-1)

    quickSort(lis, p+1, end)


lis=[9,8,7,6,5,4]
quickSort(lis,0,5)
for item in lis:
    print(item,end=" ")