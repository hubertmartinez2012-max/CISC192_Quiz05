//
//
#include <iostream>
#include "apex_code.h"

using namespace std;

#include <iostream>
#include "apex_code.h"

using namespace std;

bool isPrime(int nNum)
{
    if (nNum <= 1)
    {
        return false;
    }

    for (int i = 2; i < nNum; i++)
    {
        if (nNum % i == 0)
        {
            return false;
        }
    }

    return true;
}
