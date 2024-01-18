#include <iostream>

int main() {
    // Contoh pengulangan while
    int i = 10;
    while (i >= 5) {
        std::cout << "Iterasi ke-" << i << std::endl;
        --i;
    } while (i >= 5);

    return 0;
}