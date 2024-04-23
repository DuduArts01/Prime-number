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

