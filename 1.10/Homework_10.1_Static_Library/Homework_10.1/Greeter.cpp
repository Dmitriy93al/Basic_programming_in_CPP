#include <string>
#include "Greeter.h"


namespace Lib {

	std::string Greeter::greet(std::string name) {
		std::string stroka = ("������������, " + name);
		return stroka;
	}

}