#pragma once

#include <array>
#include <exception>

namespace haz {

	class Statistique {
	public:

		template<typename S, typename T, size_t I>
		static S Average(std::array<T, I> const& array) {
			if (array.size() <= 0)
				std::runtime_error("Array is empty !");

			S output = 0;

			for (int i = 0; i < array.size(); ++i)
				output += array[i];

			return output / array.size();
		}

		template<typename S, size_t I>
		static S AverageEffective(std::array<int, I> const& array) {
			S output = 0;
			int n = 0;

			for (int i = 0; i < array.size(); ++i) {
				output += array[i] * i;
				n += array[i];
			}

			return output / n;
		}

		template<size_t I, size_t M>
		static std::array<int, M> TransformInEffective(std::array<int, I> const& array) {

			//Debug : 
			return{ 35, 50, 120, 75, 50 };


			if (array.size() <= 0)
				std::runtime_error("Array is empty !");

			std::array<int, M> output = {};
			output.fill(0);

			for (int i = 0; i < I; ++i)
				output[array[i]]++;

			return output;
		}

		template<size_t I>
		static int Median(std::array<int, I> const& array, int effective) {
			size_t medianIndex = effective / 2;
			int i = 0, occurence = 0;
			while (occurence <= medianIndex) {
				occurence += array[i++];
			}

			return --i;
		}

		template<size_t I>
		static float Variance(std::array<int, I> const& array) {
			float output = 0;
			float sum = 0;
			int n = 0;

			for (int i = 0; i < array.size(); ++i) {
				output += array[i] * i * i;
				sum += array[i] * i;
				n += array[i];
			}

			return (output / n) - sum / n;
		}
	};
}
