#ifndef GIT_CORE_COMMIT_H
#define GIT_CORE_COMMIT_H


namespace git_core {

struct MetaData {
	char * Msg;
	char * Author;
	char * Committer; // can be email
};
class Commit {

public:
	Commit();
	~Commit();
private:

	BlobNode * RootTree; // Effectivly ptr to sc?
	
	MetaData ExtraInfo;

	Commit *Parent; // Possible other parents

};
}
#endif