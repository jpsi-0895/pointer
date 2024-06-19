
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
    log(var);

    // doble pointer?

    char** dptr = &buffer;

    delete[] buffer;  // delete heap array value
    return 0;
}
