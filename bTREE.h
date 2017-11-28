//Oyedola Ajao - Group : HashBrowns
//COSC 2030 - FALL 2017
//MerkleVotes - Assignments 4, 5, & 6
//Due : Dec 1 2017

#pragma once
#include <string>

using namespace std;



class bTREE

{

	struct treeNode {

		string data;

		int time;

		treeNode *left;

		treeNode *right;

		bool leaf();

	};



private:

	//some data structure to hold your treeNodes together ...

	//DATASTUCTURE treeNodes tree;

	//any helper private variables you need

	int count;

	treeNode *tree;

public:

	bTREE();

	~bTREE();


	int dataInserted();

	int numberOfNodes();


	bool insert(string, int);

	bool find(string);

	string locate(string);


	bool insert(treeNode*, string, int);

	bool find(treeNode*, string);

	string locate(treeNode*, string, string);



	friend bool operator==(const bTREE& lhs, const bTREE& rhs);

	friend bool operator!=(const bTREE& lhs, const bTREE& rhs);

	friend std::ostream& operator<<(std::ostream& out, const bTREE& p);
};
