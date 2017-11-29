/*
bTREE.h
Sam Blair, Oyedola Ajao, Sam Goering, and Easton Tuttle
Computer Science II
Homework 5 - Merkle Votes
November 8, 2017
Interfaces of the bTREE class.
*/

#pragma once
#include <string>
#include "treeNode.h"
#include "list.h"

using namespace std;

class bTREE

{

private:


	int count;
	treeNode tree;

	bool insert(treeNode* m, string v , int y);
	bool find(treeNode*, string);
	string locate(treeNode*, string, string);

public:

	bTREE();

	~bTREE();


	int dataInserted();

	int numberOfNodes();


	bool insert(string, int);

	bool find(string);

	string locate(string);

	friend bool operator==(const bTREE& lhs, const bTREE& rhs);

	friend bool operator!=(const bTREE& lhs, const bTREE& rhs);

	friend std::ostream& operator<<(std::ostream& out, const bTREE& p);
};
