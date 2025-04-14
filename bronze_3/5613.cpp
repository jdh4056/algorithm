#include <iostream>
using namespace std;

int main() {
    long long result;
    cin >> result;

    while (true) {
        string token;
        cin >> token;

        if (token == "=") {
            cout << result;
            break;
        }

        char op = token[0];
        long long num;
        cin >> num;

        if (op == '+') result += num;
        else if (op == '-') result -= num;
        else if (op == '*') result *= num;
        else if (op == '/') result /= num;
    }

    return 0;
}
