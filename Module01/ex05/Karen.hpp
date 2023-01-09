#include <iostream>

class Karen {
	public:
		void complain(std::string level);
	private:
		Karen(void);
		~Karen(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};