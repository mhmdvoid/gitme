#ifndef GIT_CORE_SnapShot_H
#define GIT_CORE_SnapShot_H
#include "File.h"
#include "BlobNode.h"

namespace git_core {

// This is the staging area structure
class SnapShot {

public:
	SnapShot();
	~SnapShot();


	bool Insert(File &Blob);
private:
	BlobNode *Root; 
	
};


}
#endif
