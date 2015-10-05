// bigint Test Program
//
// Tests:  times_10, uses ==
//

#include "bigint.h"

#include <cassert>

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0); //Or whatever you call it.

        // Verify
        assert(bi == 3);
    }
    
    //Add test cases as needed.

    std::cout << "Done testing times10" << std::endl;
}

