#ifndef GIT_CORE_BLOBNODE_H
#define GIT_CORE_BLOBNODE_H
#include "Blob.h"


namespace git_core {

class BlobNode {

public:
	BlobNode();
	~BlobNode();

private:
	Blob *data;

};
}
#endif
