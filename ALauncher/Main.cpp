#include <iostream>

#include "Main.h"

#include "cppmet.h"  // .dll cmet
#include "AdTemp.h"  // .dll dexample

int main()
{
    int result = Add_Numbers(5, 7);

    Func_From_AdTemp(6, 8);
    std::cout << "Result = " << result << std::endl;
    std::system("pause");

    return 0;
}
