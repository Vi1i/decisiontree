#include <iostream>
#include <fstream>
#include <string>

#include "dt_config.hpp"
#include "Func/func.hpp"

int main(int argc, char * argv[]) {
	std::map<std::string, std::vector<std::string>> args;
	if(!func::Args(argc, argv, args)) {
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}