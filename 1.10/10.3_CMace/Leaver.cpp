#include <string>
#include "Leaver.h"


namespace lib {

	std::string Leaver::leave(std::string name) {
		std::string stroka = ("�� ��������, " + name + " !\n");
		return stroka;
	}

}