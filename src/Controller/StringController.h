/*
 * StringController.h
 *
 *  Created on: Feb 23, 2016
 *      Author: abro5723
 */

#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_

#include <iostream>

using namespace std;

class StringController
{
private:
	std::string salutations;
	std::string goodbye;
	int salutationsCount;
public:
	StringController();
	void start();


};


#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
