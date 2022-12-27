# function which implements the fibonacci search
def fib_search(givenlist, givenelement):
    # ffinding the length of given list
    length = len(givenlist)

    first = -1

    x0 = 0
    x1 = 1
    x2 = 1
    while(x2 < length):
        x0 = x1
        x1 = x2
        x2 = x1 + x0

    while(x2 > 1):
        eleIndex = min(first + x0, length - 1)
        if givenlist[eleIndex] < givenelement:
            x2, x1 = x1, x0
            x0 = x2 - x1
            start = eleIndex
        elif givenlist[eleIndex] > givenelement:
            x2 = x0
            x1 = x1 - x0
            x0 = x2 - x1
        else:
            return eleIndex
    if (x1) and (givenlist[length - 1] == givenelement):
        return length - 1
    return None


# given list
given_list = [1, 9, 4, 7, 2, 8, 6]
# sorting the given list
given_list.sort()
# given element to search
given_element = 4
# passing given list and given element to fibonacci search function to check whether
# the given element is present in list or not
print(fib_search(given_list, given_element))