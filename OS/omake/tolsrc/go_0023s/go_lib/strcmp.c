//*****************************************************************************
// strcmp.c : string function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stddef.h>

//=============================================================================
// compare D and S
//=============================================================================
int GO_strcmp (char *d, char *s)
{
	while ('\0' != *d) {
		if (*d != *s)
			return *d - *s;
		d++;
		s++;
	}

	return *d - *s;
}
