#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int weightedaverage(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << weightedaverage(array, 5) << std::endl;
    return 0;
}