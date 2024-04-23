n = int(input("Enter a number: "))

numbers = []

for i in range(2, n + 1):
    if(i == 2):
        numbers.append(i)
    elif(i % 2 != 0):
        count = 0
        for c in range(1, i + 1):
            if(i % c == 0):
                count += 1 
        if(count == 2):
            numbers.append(i)
            
print(numbers)
