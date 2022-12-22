// Copyright (c) 2022 Kent G All rights reserved.
// .
// Created by: Kent G
// Date : Dec 21, 2022
// This program prints the lowest value of ten randomly
// generated numbers

#include <time.h>

#include <array>
#include <iostream>

const int MAX_ARRAY_SIZE = 10;

int leastRandNum(std::array<int, MAX_ARRAY_SIZE> numArray) {
    // Defining the least number just outside of the range of random numbers.
    int leastNum = 101;
    // Iterating over every element in the list to find out which is lesser.
    for (int numInArray : numArray) {
        if (numInArray < leastNum) {
            leastNum = numInArray;
        }
    }
    return leastNum;
}

int main() {
    // Defining variables.
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;
    const int randomNum;
    std::array<int, MAX_ARRAY_SIZE> randNumArray;
    srand(time(NULL));
    // Getting random numbers to fill up the random number array/list.
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        randomNum = (rand() % MAX_NUM + 1) + MIN_NUM;
        randNumArray[counter] = randomNum;
    }
    // Displaying the random numbers.
    std::cout << "[" << randNumArray[0];
    for (
        int displayCount = 1; displayCount < MAX_ARRAY_SIZE - 1;
         displayCount++) {
        std::cout << ", " << randNumArray[displayCount];
    }
    std::cout << "]" << std::endl;
    int finalLeastNum = leastRandNum(randNumArray);
    // Displaying the smallest random number.
    std::cout <<
    "The smallest number in the list is " << finalLeastNum << std::endl;
}
