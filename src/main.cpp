#include <iostream>
#include "NOD.h"
#include "NOD_B.h"

int main()
{
    NOD nod;
    NOD_B nod_b(nod);
    std::cout << nod_b.useNOD(30, 18) << std::endl;
}
