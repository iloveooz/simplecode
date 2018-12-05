
	#include <iostream>

	
	class PC {
		public:
		
		enum PCState {
			OFF,
			ON,
			SLEEP
		};
		
		PCState GetState () { return state; }
		
		void SetState (PCState state) {
			this->state = state;
		}
		
		private:
		PCState state;
		
	};


	int main() {
			
		PC pc;
		pc.SetState(PC::PCState::ON);
		
		if (pc.GetState() == PC::PCState::OFF) std::cout << "pc off" << '\n';
		if (pc.GetState() == PC::PCState::ON) std::cout << "pc on" << '\n';
		if (pc.GetState() == PC::PCState::SLEEP) std::cout << "pc sleeping" << '\n';
			
		switch (pc.GetState()) {
			case PC::PCState::OFF:
				std::cout << "pc off" << '\n'; 
				break;
			
			case PC::PCState::ON:
				std::cout << "pc on" << '\n';
				break;
			
			case PC::PCState::SLEEP:
				std::cout << "pc sleep" << '\n';
				break;
			default:
				break;
		}
		
		return 0;
	}
