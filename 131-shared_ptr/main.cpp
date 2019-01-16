
#include <iostream>
#include <memory>


int main() {

    // ЧЕТВЁРТАЯ ЧАСТЬ ---------------------------------------------

    std::shared_ptr <int> sp1(new int(5));

    std::shared_ptr <int> sp2(sp1);

    return 0;
}
