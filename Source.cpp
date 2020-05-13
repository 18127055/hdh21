#include "Header.h"

hash<string> mystdhash;

unsigned long stringHashing(string s)
{
	unsigned long g;
	g = mystdhash(s);
	return g;
}