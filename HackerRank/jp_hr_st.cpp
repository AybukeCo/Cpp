//Input: A number 𝑛.
//Output: For each integer iii from 1 to nnn: 
//Print "FizzBuzz" if iii is a multiple of both 3 and 5. 
//Print "Fizz" if iii is a multiple of 3 but not 5. 
//Print "Buzz" if iii is a multiple of 5 but not 3. 
//Otherwise, print the number iii itself.

#include <iostream>
using namespace std;

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    fizzBuzz(n);
    return 0;
}
