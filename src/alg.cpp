// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    uint64_t del = 2;
    while (del * del <= value) {
        if (value % del == 0) return false;
        del++;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t index = 0;
    uint64_t number = 2;
    while (index < n) {
        if (checkPrime(number++)) index++;
    }
    return number - 1;
}

uint64_t nextPrime(uint64_t value) {
    while (!checkPrime(++value)) {}
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t number = 2;
    uint64_t sum = 0;
    while (number < hbound) {
        if (checkPrime(number)) {
            sum += number;
        }
        number++;
    }
    return sum;
}
