#ifndef RAR_COMPRESSION_H
#define RAR_COMPRESSION_H

#include "compression.h"

class RAR_Compression: public Compression
{
public:
	void compress(const std::string& file);
};

#endif // RAR_COMPRESSION_H
