#include "compressor.h"



Compressor::~Compressor()
{
	delete p;
}

void Compressor::compress(const std::string&file)
{
	p->compress(file);
}
