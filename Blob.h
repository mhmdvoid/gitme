#ifndef GIT_CORE_Blob_H
#define GIT_CORE_Blob_H


namespace git_core {


// This should be auto_created for every object
class Blob {

	// Private
	typedef unsigned char byte;
public:
	Blob();
	~Blob();

	bool isCommited() const { return Commited; }
private:
	byte Content;
	long BlobId;
	bool Commited;

	
};
}
#endif