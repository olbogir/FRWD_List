#ifndef COMPRESSION_H
#define COMPRESSION_H

#include <iostream>
#include <string>

class Compression
{
public:
	virtual ~Compression();
	virtual void compress(const std::string & file) = 0;
};

#endif // COMPRESSION_H
