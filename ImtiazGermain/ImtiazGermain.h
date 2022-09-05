// Declaration of fuctions here
#pragma once

namespace ImtiazGermain{
	class Germain {
	public:
		// Check if Number is prime or not
		static bool PrimeCheck(unsigned long long a);
		// Check if Number is a Germain Prime
		static bool IsGermain(unsigned long long a);
	};
	class ImtiazGermain {
	public:
		// Use PrimeCheck() from Germain class
		static bool IsImtiazGermain(unsigned long long a);
		static unsigned long long Integrate(unsigned long long a, unsigned long long b);
	};
}
