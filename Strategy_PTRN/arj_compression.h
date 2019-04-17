#ifndef ARJ_COMPRESSION_H
#define ARJ_COMPRESSION_H

#include "compression.h"

class ARJ_Compression: public Compression
{
public:
	void  compress(const std::string& file);
};

#endif // ARJ_COMPRESSION_H
