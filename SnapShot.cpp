#include "SnapShot.h"
#include "File.h"
#include "BlobNode.h"



using namespace git_core;


SnapShot::SnapShot() {
	Root = 0;
}
SnapShot::~SnapShot() { }

bool SnapShot::Insert(File &Blob) {
	return true;
}