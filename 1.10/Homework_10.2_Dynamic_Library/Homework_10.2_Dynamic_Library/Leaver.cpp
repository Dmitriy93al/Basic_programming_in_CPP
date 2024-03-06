#include <string>
#include "Leaver.h"


namespace lib {

	std::string Leaver::leaver (std::string name) {
		std::string stroka = ("До свиданья, " + name + " !\n");
		return stroka;
	}

}