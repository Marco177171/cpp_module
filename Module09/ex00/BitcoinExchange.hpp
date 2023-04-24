#ifndef BTC_HPP
# define BTC_HPP

#include <iostream>

class btc {
	public:
		btc(void);
		btc(const btc &src);
		btc &operator=(const btc &src);
		~btc();
	private:
		/* data */
};

#endif