#include <iostream>
#include <string>

std::string addBinaryStrings(std::string a, std::string b) {
    int i = a.length() - 1, j = b.length() - 1;
    int carry = 0;
    std::string result = "";

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        result = std::to_string(sum % 2) + result;
        carry = sum / 2;
    }

    return result;
}

int main() {
    std::string a = "1111";
    std::string b = "1";
    std::cout << addBinaryStrings(a, b) << std::endl;
    return 0;
}
