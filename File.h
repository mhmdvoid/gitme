#ifndef GIT_CORE_FILE_H
#define GIT_CORE_FILE_H


namespace git_core {


// This should be auto_created for every object
class File {

	// Private
	typedef unsigned char byte;
public:
	File();
	~File();

	bool isCommited() const { return Commited; }
private:
	byte Content;
	long BlobId;
	bool Commited;

	
};
}
#endif
