#include <iostream>
#include <cstdlib>
using namespace std;

int addition(int num1, int num2) {
    return num1 + num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

int main() {

    for (int i = 0; i < 5; i++){
        cout << addition(i,3) << ' ';
    }
}
