
	#include <iostream>
	
	namespace firstNS {	
		void foo () {
			std::cout << "Первая функция" << '\n';
		}
	}
	
	namespace secondNS {
		void foo () {
			std::cout << "Вторая функция" << '\n';
		}
	}
	
	using namespace secondNS;
	
	int main() {
		
		foo();
		
		return 0;
	}
