#ifndef GIT_CORE_COMMIT_H
#define GIT_CORE_COMMIT_H

namespace git_core {

class CommitList;
class BlobNode;
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
	
	MetaData Info;

	CommitList *Parents; // Possible other parents


	unsigned char *Hash;// TODO: When Parsing/AfterConstruct a commit, calc(sha1)

};
}
#endif
