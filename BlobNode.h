#ifndef GIT_CORE_BLOBNODE_H
#define GIT_CORE_BLOBNODE_H
#include "File.h"


namespace git_core {

class BlobNode {

	File *data;  
public:
	BlobNode();
	~BlobNode();
};
}
#endif 
