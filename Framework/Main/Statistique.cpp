#include "stdafx.h"
#include "Statistique.h"

using namespace haz;

/*template<typename S, typename T>
S Statistique::Average(T[] const &_array, int const & _size)
{
	S _output = 0;

	for (int i = 0; i < _size; ++i)
		_output += _array[i];

	return _output / _size;
}*/

template<typename S, typename A>
int Statistique::Average ( A const& _array ) {
	S _output = 0;

	for ( int i = 0; i < _array.size(); ++i )
		_output += _array[ i ];


	return _output / _array.size ();
}
