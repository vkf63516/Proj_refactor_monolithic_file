/*
 * fileio.h
 *
 *  Created on: Sep 22, 2020
 *      Author: Vishal
 */
#ifndef FILEIO_H_
#define FILEIO_H_
#include "constants.h"

#include <iostream>
#include <string>
#include <vector>



int loadData(const std::string filename, std::vector<process> &myProcesses);

int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */