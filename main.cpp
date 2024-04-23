#include <iostream>

using namespace std;

int main()
{
    int n;
    int mResult = 0;
    int count;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "\nResult of Prime Numbers:\n";
    for(int i = 2; i < n + 1; i++){
        if(i == 2){
            cout << i << "\n";
        } else if(i % 2 != 0){
            count = 0;
            for(int c = 1; c < i + 1; c++){
                if(i % c == 0){
                    count++;
                }
            }
            if(count == 2){
                cout << i << "\n";
            }
        }
    }

    return 0;
}
