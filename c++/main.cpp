/* main.cpp | Fizz Buzz | Roman S. Collins | Tue, Feb 06, 2018

    Fizz Buzz in C++

*/
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

int main() {
    for (int i = 1; i < 101; i++) {
        bool x = true;
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "fizzbuzz" << endl;
            bool x = false;
            continue;
        }

        if (i % 3 == 0) {
            cout << "fizz" << endl;
            bool x = false;
            continue;
        }

        if (i % 5 == 0) {
            cout << "buzz" << endl;
            bool x = false;
            continue;
        }

        if (x == true) {
            cout << i << endl;
        }

    }
}
