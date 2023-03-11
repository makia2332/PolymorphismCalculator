#include <iostream>
#include <iomanip>
#include "calculator.h"

using namespace std;

int main()
{

    Calculator calc;

    Calculator* calcPtr = &calc;
    calcPtr->welcome();

    cout<<setprecision(15);

    string input = "";
    while(cin>>input && input !="exit"){
        calcPtr->parseOperation(input);
        calcPtr->welcome();
    }

    return 0;
}
