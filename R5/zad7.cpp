#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int count = 0;
    int num = 2;
    while (count < 4) {
        if (isPerfect(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    return 0;
}
