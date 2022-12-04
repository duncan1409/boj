A = input()

x = A.find("+")
y = A.find("=")

A1 = A[:x]
A2 = A[x+1:y]
A3 = A[y+1:]

A1_list =[]
for i in range(len(A1)):
    
    if A1[i]=="C" or A1[i]=="H" or A1[i]=="O":
        A1_list.append(A1[i])
    else:
        a = A1_list.pop()
        for j in range(int(A1[i])):
            A1_list.append(a)


A2_list =[]
for i in range(len(A2)):
    
    if A2[i]=="C" or A2[i]=="H" or A2[i]=="O":
        A2_list.append(A2[i])
    else:
        a = A2_list.pop()
        for j in range(int(A2[i])):
            A2_list.append(a)


A3_list =[]
for i in range(len(A3)):
    
    if A3[i]=="C" or A3[i]=="H" or A3[i]=="O":
        A3_list.append(A3[i])
    else:
        a = A3_list.pop()
        for j in range(int(A3[i])):
            A3_list.append(a)

list1 = [A1_list.count("C"),A1_list.count("H"),A1_list.count("O")]
list2 = [A2_list.count("C"),A2_list.count("H"),A2_list.count("O")]
list3 = [A3_list.count("C"),A3_list.count("H"),A3_list.count("O")]

answer = []

for i in range(1,11):
    for j in range(1,11):
        for u in range(1,11):
            
            if list1[0]*i + list2[0]*j == list3[0]*u:
                if list1[1]*i + list2[1]*j == list3[1]*u:
                    if list1[2]*i + list2[2]*j == list3[2]*u:
                        answer.append(i)
                        answer.append(j)
                        answer.append(u)
                        

print(answer[0],answer[1],answer[2])
