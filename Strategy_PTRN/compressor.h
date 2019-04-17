#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include "compression.h"

class Compressor
{
private:
	Compression* p;
public:
	Compressor(Compression* comp): p(comp){}
	~Compressor();
	void compress(const std::string& file);
};

#endif // COMPRESSOR_H
