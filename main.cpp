#include <iostream>

using namespace std;

int main()
{
    int n;
    int mResult = 0;
    int count;
    cout << "Enter a number: ";
    cin >> n;
    
    int numbers[n];
    
    
    for(int i = 2; i < n + 1; i++){
        if(i == 2){
            numbers[mResult] = i;
            ++mResult;
        } else if(i % 2 != 0){
            count = 0;
            for(int c = 1; c < i + 1; c++){
                if(i % c == 0){
                    count++;
                }
            }
            if(count == 2){
                numbers[mResult] = i;
                ++mResult;
            }
        }
    }
    
    cout << "\nResult of Prime Numbers:\n";
    for(int m = 0; m < mResult; m++){
        cout << numbers[m] << " ";
    }
    
    return 0;
}

/*
n = int(input("Digite um número: "))

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
*/
