#include <iostream>
#include <google/protobuf/stubs/logging.h>

int main()
{
    GOOGLE_LOG(ERROR) << "Division or mod by zero: dividend.hi=";
    std::cout << "Hello World!\n";
}
