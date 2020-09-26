/*
 * utils.h
 *
 *  Created on: Sep 22, 2020
 *      Author: Vishal
 */
#ifndef UTILS_H_
#define UTILS_H_
#include <vector>
#include "constants.h"


void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);

process getNext(vector<process> &myProcesses);

int getSize(vector<process> &myProcesses);

int handleMissingData(vector<process> &myProcesses);

#endif /* UTILS_H_ */