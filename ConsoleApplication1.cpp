// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double first_year = 400;
	for (int i = 0; i < 12; ++i)
        first_year = first_year + first_year * 0.0661 / 12 + 10;

	cout << "first_year: " << first_year  << endl;

    double second_year = first_year;
    for (int i = 0; i < 24; ++i)
        second_year = second_year + second_year * 0.0661 / 12 + 10;
    cout << "second_year: "<< second_year << endl;
	
    /*for (int i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0)) std::cout << "FizzBuzz" << std::endl;
        else if (i % 3 == 0) std::cout << "Fizz" << std::endl;
        else if (i % 5 == 0) std::cout << "Buzz" << std::endl;
        else    std::cout << i << std::endl;
    }*/

    //system("pause");
	return 0;
}
