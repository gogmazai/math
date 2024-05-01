#include <iostream>

int calculate_sum(int a, int b) {
    return a + b;
}

int main() {
    int result = calculate_sum(2, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
