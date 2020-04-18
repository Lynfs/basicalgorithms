#include<iostream>

struct Node {
	int data; 
	Node* left;
	Node* right;
};

bool Search(Node* root, int data){
	if(root == NULL){
		return false;
	}
	else if(root->data == data){
		return true;
	}
	else if(data <= root->data){
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

Node* CreateNode(int data){
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* Add(Node* root, int data){
	if(root == NULL) { 
		root = CreateNode(data);
	}
	else if(data <= root->data){
		root->left = Add(root->left,data);
	}
	else {
		root->right = Add(root->right,data);
	}
	return root;
}

int main(int argc, char *argv[]){
	Node* root = NULL;  
	int num;
	root = Add(root, 100);
	std::cin>>num;
	std::cout<<Search(root,num)<<"\n";
}
