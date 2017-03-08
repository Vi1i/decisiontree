#include <iostream>
#include <fstream>
#include <string>

#include "dt_config.hpp"
#include "Func/func.hpp"

int main(int argc, char * argv[]) {
	if(!func::Args(argc, argv)) {
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}