GroupACri = []
GroupBBad = []
GroupCFoot = []
CriandBad = []
CriandBadNotBoth = []
NotCriNotBad = []
CriandfootNotBad = []

a = int(input("Enter the number of student in group A:"))
b = int(input("Enter the number of student in group B:"))
c = int(input("Enter the number of student in group C:"))

for i in range(a):
    GroupACri.append(
        int(input("Enter the roll number of student of Group A:")))
for i in range(b):
    GroupBBad.append(
        int(input("Enter the roll number of student of Group B:")))
for i in range(c):
    GroupCFoot.append(
        int(input("Enter the roll number of student of Group C:")))

for i in range(a):
    if (GroupACri[i] in GroupBBad):
        CriandBad.append(GroupACri[i])

for i in range(a):
    if (GroupACri[i] not in GroupBBad):
        CriandBadNotBoth.append(GroupACri[i])

for i in range(b):
    if (GroupBBad[i] not in GroupACri):
        CriandBadNotBoth.append(GroupBBad[i])

for i in range(c):
    if (GroupCFoot[i] not in GroupACri and GroupCFoot[i] not in GroupBBad):
        NotCriNotBad.append(GroupCFoot[i])

for i in range(a):
    if (GroupACri[i] in GroupCFoot and GroupACri[i] not in GroupBBad):
        CriandfootNotBad.append(GroupACri[i])

for i in range(c):
    if (GroupCFoot[i] in GroupACri and GroupCFoot[i] not in GroupBBad):
        CriandfootNotBad.append(GroupCFoot[i])
print(GroupACri)
print(GroupBBad)
print(GroupCFoot)
print("Student who plays both cricket and badminton:", CriandBad)
print("Student who plays either cricket or badminton not both:", CriandBadNotBoth)
print("Student who plays neither cricket nor badminton:", NotCriNotBad)
print("Number of student who plays neither cricket nor badminton:", len(NotCriNotBad))
print("Student who plays both cricket and football but not badminton:", CriandfootNotBad)
print("Number of Student who plays both cricket and football but not badminton:",
      len(CriandfootNotBad))
