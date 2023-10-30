#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_string = "hello";
    int length = input_string.length();
    int base_10_numbers[length];

    for (int i = 0; i < length; i++) {
        if (input_string[i] >= 'a' && input_string[i] <= 'z') {
            base_10_numbers[i] = input_string[i] - 'a' + 10;
        } else {
            base_10_numbers[i] = 0;  // or any other value for non-alphabet characters
        }
    }

    for (int i = 0; i < length; i++) {
        cout << base_10_numbers[i] << " ";
    }

    return 0;
}
