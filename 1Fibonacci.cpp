//Display the Fibonacci sequence
#include <iostream>
#include <vector>

int main() {
    unsigned int len;

    std::cin >> len;

    std::vector<int> serie(len);
    serie[0]= 1;
    serie[1]= 1;
    std::cout << "Fibonacci Series: " << std::endl;

    for (int i = 2; i < len; i++) {
        serie[i]= serie[i-1] + serie[i-2];
    }

    for(int i = 0; i <len; i++){
        std::cout << i + 1 << ": " << serie[i] << std::endl;
    }

    return 0;
}
