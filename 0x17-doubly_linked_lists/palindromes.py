#!/usr/bin/python3

def palidrome(num):
    num = str(num)
    num_len = len(num)//2
    i = 0;
    while i < num_len:
        j = -1 - i
        if num[i] == num[j]:
            pass
        else:
            return False
        i += 1
    return True
temp = []
for i in range(100, 1000):
    for j in range(100, 1000):
        if palidrome(i * j):
            temp.append(i * j) 
print(max(temp))
#[i * j for i in range(100, 1000) for j in range(100, 1000)]
