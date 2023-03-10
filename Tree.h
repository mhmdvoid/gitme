#ifndef GIT_CORE_Tree_H
#define GIT_CORE_Tree_H


namespace git_core {

// This is the staging area structure, sotf of Git/index.
class Tree {

public:
	Tree();
	~Tree();


	bool Insert(Blob &B);
private:
	BlobNode *Root; 
	
};


}
#endif
