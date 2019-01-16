
	#include <iostream>
	#include <string>
	#include <memory>
	
	// smart pointers
	
	// auto_ptr - устарел, похож на unique_ptr, который вместо него 
	//	используется
		
	// unique_ptr - более безопасен
	// shared_ptr - общий указатель 
	
	
	// std::auto_ptr и std::unique_ptr могут в одиночестве владеть 
	// какими-либо данными
	
	// std::shared_ptr может владеть данными совместно
	
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
		
		/* ПЕРВАЯ ЧАСТЬ ------------------------------------------------
		// нет необходимости контролировать указатель
		SmartPointer <int> pointer1 = new int(5);		
		std::cout << *pointer1 << '\n';
		
		// оба указателя считают, что пятерка принадлежит им
		SmartPointer <int> pointer2 = pointer1;
		*/
		
		
		/* ВТОРАЯ ЧАСТЬ ------------------------------------------------
		// std::auto_ptr <int> ap1(new int(5));
		// std::auto_ptr <int> ap2(ap1);
		*/		
				
		/* ТРЕТЬЯ ЧАСТЬ	------------------------------------------------	
		std::unique_ptr <int> up1(new int(5));
		
		// передача одного unique pointer другому запрещена
		// std::unique_ptr <int> ap2(ap1);		
		
		std::unique_ptr <int> up2;
		
		// up2 = move(up1);
		
		// up2.swap(up1);
		
		int *ptr = up1.get();
		
		std::cout << *ptr << '\n';
		*/
		
		// ЧЕТВЁРТАЯ ЧАСТЬ ---------------------------------------------
		
		std::shared_ptr <int> sp1(new int(5));
		
		std::shared_ptr <int> sp2(sp1);
		
		return 0;
	}
