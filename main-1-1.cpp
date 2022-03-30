#include<iostream>

// the keyword extern means the function hello is defined in another file. 
// in our case, it is defined in the file function-1-1.cpp
extern void print_until_down(int *vals, int len);

int main(){

    int *pointer = new int[5];
    for(int i=0; i<5; i++){
        pointer[i] = i;
    }

    print_until_down(pointer, 5);

    return 0;
}

// in linux, you can compile this program using g++
// g++ -Wall main-1-1.cpp function-1-1.cpp -o main.out
// -Wall means show all Warnings
// -o means you want the output to be named main.out