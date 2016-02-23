/*
 * StringController.h
 *
 *  Created on: Feb 23, 2016
 *      Author: abro5723
 */

#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_

#include <string>
using namespace std;

class StringController
{
private:
	string count;
	string comstring;
public:
	StringController();
	void setString(string);
	string getString();
	void start();
};


#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
