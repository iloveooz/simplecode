
	#include <iostream>
	#include <string>
	
	// smart pointers
	
	template <typename T>
	class SmartPointer {
	public:
		SmartPointer(T *ptr) {
			this->ptr = ptr;
			std::cout << "constructor" << '\n';
		}
		
		~SmartPointer() {
			delete ptr;
			std::cout << "destructor" << '\n';
		}
		
		// перегрузка - разыменование
		T& operator * () {
			return *ptr;
		}
		
	private:
		T *ptr;
	};
	
	int main() {
		
		// нет необходимости контролировать указатель
		SmartPointer <int> pointer = new int(5);
		
		*pointer = 1600;
		
		std::cout << *pointer << '\n';
		
		return 0;
	}
