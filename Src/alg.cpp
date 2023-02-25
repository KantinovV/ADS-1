// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
 uint64_t count = 0;
 for (int l = 2; l*l <= value; ++l) {
  if (value % l == 0) {
   return false;
  }
 }
 return true;
}

uint64_t nPrime(uint64_t value) {
	uint64_t flag = 0, n=0;
	for(uint64_t i = 2; i <1000000; i++)
	{
		for(uint64_t j = 2; j < i; j++)
		{
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			n++;
		}
		flag = 0;
		if (n == value) {
			return i;
		}
	}
}

uint64_t nPrime(uint64_t value) {
	uint64_t flag = 0, n = 0, pRomis=0;
	for (uint64_t i = 2; i < 1000000; i++)
	{
		for (uint64_t j = 2; j < i; j++)
		{
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			n=i;
		}
		flag = 0;
		if (n == value) {
			for (uint64_t i = 2; i < 1000000; i++)
			{
				for (uint64_t j = 2; j < i; j++)
				{
					if (i%j == 0) {
						flag = 1;
						break;
					}
				}
				if (flag == 0) {
					pRomis = i;
				}
				flag = 0;
				if (pRomis > n) {
					return pRomis;
				}
				if (pRomis > n) {
					break;
				}
			}
		}
	}
}

uint64_t sumPrime(uint64_t hbound) {
 uint64_t mmm = 0;
 for (int l = 0; l < hbound; l++) {
  if (checkPrime(l)) {
   mmm += l;
  }
 }
 return mmm;
}

