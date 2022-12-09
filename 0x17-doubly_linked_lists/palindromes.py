num = []
pali = []
i = 1

for i in range(100, 1000):
	for j in range(100, 1000):
		num.append(i*j)  
#		print(f"{i}--{j}", end=" ")
for i in num:
	j = str(i)
	if (j[:3] == (j[-3:])[::-1]):
		pali.append(i)

pali.sort()
print(pali[-1])
