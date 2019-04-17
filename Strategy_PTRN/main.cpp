#include <iostream>
#include <string>

#include "compression.h"
#include "compressor.h"
#include "zip_compression.h"

using namespace std;

int main()
{

	Compressor* p = new Compressor(new ZIP_Compression);
p->compress("file.txt");
delete p;
	return 0;
}
