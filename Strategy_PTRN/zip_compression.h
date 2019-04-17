#ifndef ZIP_COMPRESSION_H
#define ZIP_COMPRESSION_H

#include "compression.h"

class ZIP_Compression: public Compression
{
public:
	void compress(const std::string& file);
};

#endif // ZIP_COMPRESSION_H
