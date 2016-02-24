/*
 * StringController.cpp
 *
 *  Created on: Feb 23, 2016
 *      Author: abro5723
 */

#include "StringController.h"

#include <iostream>
#include <string>


using namespace std;

StringController :: StringController()
{
	this->salutations= "Heeyyyoooooo";
	this->goodbye = "Peace brah";
	this->salutationsCount = 0;
}

void StringController :: start()
{
	cout << salutations << endl;
	cout << salutations[2] << endl;
	cout << salutations.at(3) << endl;
	int salutationsCount = salutations.length();
	cout << "The salutations string is " << salutationsCount << " letters long." << endl;
	bool salutationsEmpty = salutations.empty();
	if(salutationsEmpty == 0)
	{
		cout << "The salutations string is not empty." << endl;
	}
	std::string salutationsPart = salutations.substr(0,2);
	std::string salutationsPiece = salutations.substr(3);
	cout << salutationsPart << " is a part of the greetings string" << endl;
	cout << salutationsPiece << " is a piece of the greetings sting" << endl;
	bool equal = salutations.compare(goodbye);
	if(equal == 0)
	{
		cout << "The salutations and goodbye strings are not the same length." << endl;
	}
	else
	{
		cout << "The greetings and goodbye strings are the same length." << endl;
	}


}
