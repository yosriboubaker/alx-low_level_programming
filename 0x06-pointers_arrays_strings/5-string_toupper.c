#include "main.h"
#include <ctype.h>

char *string_toupper(char *stmt)
{
	int i;
	for (i=0; stmt[i]; i++)
	{
		if (islower(stmt[i]))
		{
			stmt[i] = toupper(stmt[i]);
		}
	}
	return(stmt);
}
	
