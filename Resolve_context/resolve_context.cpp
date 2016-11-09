#include <iostream>

//Switch configurations between resolve_context_flag and resolve_context_no_flag -
//Corresponding conditional branch will be selected
void check_context() {
    int count;

#ifdef SpecialFlag
#if SpecialFlag
    std::cout << "Running with Special Flag" << std::endl;
    count = 1000;
#else
    std::cout << "Running without Special Flag" << std::endl;
    count = 1;
#endif
#endif

    for (int i = 0; i < count; i++) {
        //...
    }
}
