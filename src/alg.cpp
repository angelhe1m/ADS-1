// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value <= 1)
    return true;
  for (int k = 2; k * k <= value; k++) {
    if (value % k == 0)
      return true;
  }
  return false;
}

uint64_t nPrime(uint64_t n) {
uint64_t chsl = 0;
 uint64_t nomer = 0;
  while (n > 0) { 
    if (checkPrime(chsl) == 1) {
      nomer = chsl;
      --n;
    }
    ++chsl;
  }
  return nomer;
}

uint64_t nextPrime(uint64_t value) {
 while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t summa = 0;
  hbound = hbound - 1;
  while (hbound > 0) {
    if (checkPrime(hbound)) {
      summa = summa + hbound;
    }
    --hbound;
  }
  return summa;
}
