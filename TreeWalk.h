#ifndef GIT_CORE_TreeWalk_H
#define GIT_CORE_TreeWalk_H

namespace git_core {

// Basically, A working dir consumer.
// index client calls off to walk and create/hash blobs to be stored in staging area.
// If i understand git internall, There's `this` and cache tree which's a complex for now.
// creating a commit should trigger index, which again hash index to be clear for gitme diff

// See -- CacheTree, Index, Tree, git internal objects.
class TreeWalk {

public:
	TreeWalk();
	~TreeWalk();

};


}

#endif
