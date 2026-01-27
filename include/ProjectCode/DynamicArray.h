#pragma once
#include "ProjectCode_API.h"

class DynamicArray
{
public:
	// If compiling on Windows, be sure to prepend any public member functions
	// with PROJECTCODE_API so they're accessible from the unit test module.
	// See ProjectCode_API.h for more information.


	// On Windows, at least one API must be exported in order for a library to be
	// generated. Without this, UnitTestExe will complain about ProjectCode.lib
	// not existing, which thwarts building this starter code out of the box.
	//
	// Remove this API and comment once you've implemented real content for this class.
        PROJECTCODE_API void PlaceholderApiFunction();


	// Assignment part 3: YOUR ANSWER HERE
};
