#pragma once

#include <array>

namespace haz {

	class Statistique {
	public:

		//template <typename S, typename T>
		//static S Average(T[] const& _array, int const& _size);

		template <typename S, typename A>
		static int Average ( A const& _array );
	};
}
