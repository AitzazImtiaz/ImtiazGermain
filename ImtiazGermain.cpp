// ImtiazGermain.cpp : Defines the functions for the static library.
// Core file of the library implementation

#include "pch.h"
#include "framework.h"
#include "ImtiazGermain.h"
unsigned long long b, c, d, helper, helper1;
namespace ImtiazGermain {
    bool Germain::PrimeCheck(unsigned long long a)
    {
        if (a == 2 || a == 3)
            return true;

        if (a <= 1 || a % 2 == 0 || a % 3 == 0)
            return false;
        for (int i = 5; i * i <= a; i += 6)
        {
            if (a % i == 0 || a % (i + 2) == 0)
                return false;
        }
        return true;
    }
    bool Germain::IsGermain(unsigned long long a) {
        unsigned long long b;
        b = (2 * a) + 1;
        if (Germain::PrimeCheck(a) == true and Germain::PrimeCheck(b) == true) {
            return true;
        }
        else {
            return false;
        }
    }
    bool ImtiazGermain::IsImtiazGermain(unsigned long long a) {
        helper = 1;
        b = (2 * a) + helper;
        c = (2 * b) + helper;
        d = (2 * c) + helper;
        if (Germain::PrimeCheck(a) == true and Germain::PrimeCheck(b) == true and Germain::PrimeCheck(c) == false and Germain::PrimeCheck(d) == true) {
            return true;
        }
        else {
            return false;
        }
    }
    unsigned long long ImtiazGermain::Integrate(unsigned long long a, unsigned long long b) {
        unsigned long long result;
        helper1 = 2;
        result = ((a ^ helper1) + a) - ((b ^ helper1) + b);
        return result;
    }
}
