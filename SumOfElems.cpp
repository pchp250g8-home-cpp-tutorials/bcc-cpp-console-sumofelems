#include <iostream>
#include <valarray>
#include <math.h>
#include <stdlib.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int nElems;
    std::cout << "Input a count of elements in array\r\n";
    std::cin >> nElems;
    std::valarray<int> iArray(nElems);
    int nSum = 0;
    srand(time(nullptr));
    for (int i = 0; i < nElems; i++)
    {
        iArray[i] = 1 + rand() / 1000;
    }
    std::cout << "Inputed array : ";
    for (int i = 0; i < nElems; i++)
    {
        std::cout << iArray[i] << " ";
        nSum += iArray[i];
    }
    std::cout << "\r\nThe Sum of " << nElems
              << " elements of the array is : " << nSum << "\r\n";
    std::cin.ignore();
    std::cin.get();
}
