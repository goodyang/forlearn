#include <iostream>
#include <string>

using namespace std;

class TreeNode {
	public:
		TreeNode():value(string()), count(new int(1)), left(nullptr), left(nullptr){ }
		TreeNode(const TreeNode& t):
			value(t.value), count(t.count), left(t.left),right(t.right){
			++*count;
		}
		TreeNode& operator=(const TreeNode& rhs){
			value = t.value;
			++*rhs.count;
			if(--*count==0){
				delete count;
				if(left)
					delete left;
				if(right)
					delte right;
			}
			value = rhs.value;
			left = left;
			right = right;
			return *this;
		}
		~TreeNode(){
			if(--*count==0){
				if(left){
					delete left;
					left = nullptr;
				}					
				if(right){
					delte right;
					right = nullptr;
				}					
				delete count;
				count = nullptr;	
			}
		}
	private:
		string value;
		int *count;
		TreeNode *left;
		TreeNode *right;
};

class BinStrTree{
	public:
		BinStrTree(): root(new TreeNode()){ }
		BinStrTree(const BinStrTree& rhs):root(new TreeNode(*rhs.root)) { }
		BinStrTree& operator=(const BinStrTree& rhs){
			auto new_ptr = new TreeNode(*rhs.root);
			delte root;
			root = new_ptr;
		}
		~BinStrTree(){delete root;}
	private:
		TreeNode *root;	
};
