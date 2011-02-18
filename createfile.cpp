// compile with: g++ createfile.cpp -o createfile
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

int main( int argc, const char* argv[] )
{
	// argv[1]	filename
	// argv[2]	string
	// argv[3]	count
	if (argc < 4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> <string> <count>" << std::endl;
		std::cout << "Creates file <filename> with <count> lines consisting of <string>" << std::endl;
		return 1;
	}
	
	std::string filename = argv[1];
	std::string oneLine = argv[2];
	int count = atoi(argv[3]);
	
	std::ofstream fp_out(argv[1], std::ios::out);
	for (int i = 0; i < count; i++)
	{
		fp_out << oneLine << std::endl;
	}
	fp_out.close();
	return 0;
}

