
#include <iostream>
#define log(x) std::cout << x << std::endl;
int main(int argc, char const *argv[])
{
    // managing memory
    // memory is like big block of house  // linear one dimention block // every house has address
    // everything we are read and write using memory

    int var = 8;
    int *ptr = &var;

    char *buffer = new char[8];
    int *hello = new int[10];
    hello[9] = 8;
    hello[8] = 8;
    hello[7] = 8;
    hello[6] = 8;
    hello[5] = 8;
    hello[0] = 9;
    log(var);

    int hi[] = {1,2,3,4,5,6,7};
    float hfloat[] = {1,2,3,4,5,6,7};

    // doble pointer?

    char **dptr = &buffer;

    // delete[] buffer;  // delete heap array value
    return 0;
}
