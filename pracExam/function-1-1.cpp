#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>

void printer(int array[10][10]) {
    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++){
            if(j == 9) {
                std::cout << array[i][j] << std::endl;
            } else {
                std::cout << array[i][j] << " ";
            }
        }
    }
}