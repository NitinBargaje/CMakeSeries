#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}
int main() {
    std::cout << "Hello World!";
    std::cout << add(3, 7);
    return 0;
}