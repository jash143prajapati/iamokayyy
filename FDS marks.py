
# Online Python - IDE, Editor, Compiler, Interpreter
FDS=[50,49,-1,44,23,0,50,-1,-1]
Total=0
Absent=0
Max=0
Min=0
Freq=0
Freqmarks=0
count=0
tempcount=0

#Absent
for i in range(len(FDS)):
    if (FDS[i]==-1):
        Absent=Absent+1
    
#Sum Max Min 
for i in range(len(FDS)):
    Total= Total+FDS[i]+Absent
    if (Max<=FDS[i]):
        Max=FDS[i]
    if (-1<FDS[i]<Min):
        Min=FDS[i]
        
# frequently marks
for i in range(len(FDS)):
    if (FDS[i]!=-1):
        for j in range(len(FDS)):
            if (FDS[i]==FDS[j]):
                tempcount=tempcount+1
                
        if (tempcount>Freq):
            Freqmarks=FDS[i]

        
        
print(f"No of absent student : {Absent}")
print(f"Average marks : {Total/len(FDS)}")
print(f"Maximum marks : {Max}")
print(f"Minimum marks : {Min}")
print(f"Frequently occuring marks :{Freqmarks}")