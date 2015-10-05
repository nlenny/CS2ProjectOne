// bigint input from file, add

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.h"

int main()
{
	// Define object for input, exit if open fails
	std::ifstream in("data1-2.txt");
   	 if(!in)
        { std::cerr << "Couldn\'t open data1-1.txt, exiting.\n"; exit(1); }
	
	//Message
	std::cout << "Input 2 program.\n";

	//Input, add, output
	  bigint left, right;
  	  while (in >> left && in >> right)
  	  {
		// Output operands
		std::cout << "left: " << left << "\n";
       		 std::cout << "right: " << right << "\n";

		//add
		bigint result = left * right;

		//result
		 std::cout << "result: " << result << "\n\n";
    }

	//closes file
	in.close();

    return 0;
}


