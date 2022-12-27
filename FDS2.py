def lw(s):
    li = []
    li = s.split(" ")
    count = 0
    temp = ""

    for i in range(len(li)):
        if (len(li[i]) > count):
            count = len(li[i])
            temp = li[i]
    print(f"Longest word in the sentence '{temp}' with length of '{count}'")


def pali(s):
    tem = s[::-1]
    if (s == tem):
        print("Yes, it is palidrome")
    else:
        print("No, it is not palidrome ")


def freoccu(s):
    count = 0
    tem = ""
    for i in range(len(s)):

        if (s.count(s[i]) > count):
            count = s.count(s[i])
            tem = s[i]
    print(f"Freqently occuring character is '{tem}' and it '{count}' times")


def occwor(s):
    tem = []
    tem = s.split(" ")
    ans = []
    for i in range(len(tem)):
        c = s.count(tem[i])
        a = tem[i]
        ans.append(f"{a}:{c}")
    print(ans)


def firstapp(s, s1):
    print(s.find(s1))


if __name__ == '__main__':

    print("Enter your string :")
    s = str(input())
    lw(s)
    pali(s)
    freoccu(s)
    occwor(s)
    print()
    print("Enter the string that have to find :")
    s1 = str(input())
    firstapp(s, s1)
