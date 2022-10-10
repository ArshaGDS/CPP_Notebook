#include <iostream>

int main()
{              
    int scores[2] {1, 4};
    int *scorePtr {scores};

    std::cout << "*scores " << *scores << std::endl;
    std::cout << "scores " << scores << std::endl;
    std::cout << "scores[0] " << scores[0] << std::endl;
    std::cout << "scorePtr " << scorePtr << std::endl;
    std::cout << "scorePtr[1] " << scorePtr[1] << std::endl;
}
