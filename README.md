<p align="center"><img src="https://img.shields.io/badge/IMTIAZ%20-GERMAIN-blue?style=for-the-badge&logo=appveyor" height="50"></p>
<p align="center"><img src="https://img.shields.io/github/issues/AitzazImtiaz/ImtiazGermain?style=social&logo=appveyor"><img src="https://img.shields.io/github/forks/AitzazImtiaz/ImtiazGermain?style=social&logo=appveyor"> <img src="https://img.shields.io/github/stars/AitzazImtiaz/ImtiazGermain?style=social&logo=appveyor"><img src="https://img.shields.io/github/license/AitzazImtiaz/ImtiazGermain?style=social&logo=appveyor"> <img src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fgithub.com%2FAitzazImtiaz%2FImttiazGermain"></p>

<img align="right" src="https://github.com/AitzazImtiaz/Public-Images/blob/main/Untitled%20design.png" width="350" height="250">

This is the first repository library on the record, I have ever designed using my own research, also as my first research related to the contribution of Sophie Germain in the field of cryptography, this repository was inspired by my book [A Young Mathematician](https://www.amazon.fr/Young-Mathematician-English-Aitzaz-Imtiaz-ebook/dp/B0BCH5DWH9/ref=sr_1_1?crid=2C0LE6ACD90DB&keywords=aitzaz+imtiaz&qid=1662221351&sprefix=%2Caps%2C201&sr=8-1) , the followinng code is implemented better and reliable then [Germain](https://github.com/AitzazImtiaz/Germain) library, and not only contains functions of "Sophie Germain primes" but also "Imtiaz Germain primes". The following library is intended to support C++ with a linkage to ```.lib``` to support executeables in Windows and Linux. Note that ```.a``` is synonymous with ```.lib``` in C++ code execution and thus treated equal. 

An implementation of the following code to check Germain prime of number 11 is as follows:
```
// using the .lib file

#include <iostream>
#include "ImtiazGermain.h"

using namespace std;

int main(){
  unsigned long long number;
  number = 11;
  if (ImtiazGermain::Germain::PrimeCheck(number) == true and ImtiazGermain::Germain::IsGermain(number) == true){
    cout << "A Germain prime!";
  } else{
    cout << "No!";
  }
  return 0;
}
```
Imtiaz Germain Prime is a recent discovery of 2022, which is add-on extension to Germain primes. To find Imtiaz Germain primes, here is an algorithm:
```
1. Take a Safe prime
2. Apply 2p + 1 on it to obtain a composite number
3. Apply 2p + 1 once more to obtain a prime number
```
Here is the implementation:
```
// using the .lib file

#include <iostream>
#include "ImtiazGermain.h"

using namespace std;

int main(){
  unsigned long long number;
  number = 11;
  if (ImtiazGermain::Germain::PrimeCheck(number) == true and ImtiazGermain::ImtiazGermain::IsImtiazGermain(number) == true){
    cout << "A Germain prime!";
  } else{
    cout << "No!";
  }
  return 0;
}
```
The following [guide](https://www.learncpp.com/cpp-tutorial/a2-using-libraries-with-visual-studio-2005-express/) is recommended when installing this library on Visual Studio, for linux you shouldd do all the steps you do to set ```.a``` file.
