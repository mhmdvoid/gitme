#ifndef GIT_CORE_CommitList_H
#define GIT_CORE_CommitList_H

namespace git_core {

// This should be abstract away to a linkedlist<T> implementaion.
class CommitList {

	class Node {
	public:
		Node(Commit *C): Commit (C), Nxt ( 0 ) {}
		~Node();
	private:
		Commit *Commit;
		Node *Nxt;
	};
public:
	CommitList();
	~CommitList();


	bool InsertCommit(Commit *Parent);
	Commit * Lookup(unsigned char * hashId);


private:
	Node *Head;
	/*size_t*/ unsigned long ListSize; // History info.
};
}


#endif
