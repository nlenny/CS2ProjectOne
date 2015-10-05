#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.h"

int main()
{
 	std::ifstream in("data1-1.txt");
   	 if(!in)
        	{ std::cerr << "Couldn\'t open data1-1.txt, exiting.\n"; exit(1); }

	 bigint left, right;
   	 while (in >> left && in >> right)
{

	std::cout << "left: " << left << "\n";
        std::cout << "right: " << right << "\n";

	bigint result = left + right;

	 std::cout << "result: " << result << "\n\n";
}

in.close();

return 0;
}

