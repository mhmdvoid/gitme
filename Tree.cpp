#include "Blob.h"
#include "BlobNode.h"
#include "Tree.h"

using namespace git_core;


Tree::Tree() {
	Root = 0;
}
Tree::~Tree() { }

bool Tree::Insert(Blob &B) {
	return true;
}
