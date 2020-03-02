#include "../includes_usr/fileIO.h"
#include <iostream>
#include <fstream>
using namespace std;
/* clears, then loads books from the file filename
 * returns  COULD_NOT_OPEN_FILE if cannot open filename
 * 			NO_BOOKS_IN_LIBRARY if there are 0 entries in books
 * 			SUCCESS if all data is loaded
 * */
int loadBooks(std::vector<book> &books, const char* filename)
{
	ifstream myInputfile;
	myInputfile.open(filename);

	if (!myInputfile.is_open())
			return COULD_NOT_OPEN_FILE;

	if (myInputfile.peek() == std::ifstream::traits_type::eof() )
	{
	   return NO_BOOKS_IN_LIBRARY;

	}


	myInputfile.close();
	return SUCCESS;
}

/* serializes books to the file filename
 * returns  COULD_NOT_OPEN_FILE if cannot open filename
 * 			NO_BOOKS_IN_LIBRARY if there are 0 entries books (do not create file)
 * 			SUCCESS if all data is saved
 * */
int saveBooks(std::vector<book> &books, const char* filename)
{
	return SUCCESS;
}

/* clears, then loads patrons from the file filename
 * returns  COULD_NOT_OPEN_FILE if cannot open filename
 * 			NO_PATRONS_IN_LIBRARY if there are 0 entries in patrons
 * 			SUCCESS if all data is loaded
 * */
int loadPatrons(std::vector<patron> &patrons, const char* filename)
{
	ifstream myInputfile;
	myInputfile.open(filename);

	if (!myInputfile.is_open())
			return COULD_NOT_OPEN_FILE;

	if (myInputfile.peek() == std::ifstream::traits_type::eof() )
	{
	   return NO_BOOKS_IN_LIBRARY;

	}


	myInputfile.close();
	return SUCCESS;
}

/* serializes patrons to the file filename
 * returns  COULD_NOT_OPEN_FILE if cannot open filename
 * 			NO_PATRONS_IN_LIBRARY if there are 0 entries in patrons  (do not create file)
 * 			SUCCESS if all data is saved
 * */
int savePatrons(std::vector<patron> &patrons, const char* filename)
{
	return SUCCESS;
}
