#pragma once
#include <iostream>
#include <string>

/*
* Generic MyArray<T>
*/

template <typename T>
class MyArray final
{
public:
	friend std::ostream& operator<< (std::ostream& os_, const MyArray<T>& ma_)
	{
		os_ << ma_.m_N << " elements:\n";
		for (size_t i = 0; i < ma_.m_N; ++i) {
			os_ << "\t [" << i << "] = " << ma_.m_array[i] << "\n";
		}

		return os_;
	}

	MyArray(size_t _N);
	~MyArray();

private:
	size_t m_N;
	T* m_array;
};

template<typename T>
inline MyArray<T>::MyArray(size_t _N)
	: m_N{ _N }, m_array{ new T[m_N] }
{
}

template<typename T>
inline MyArray<T>::~MyArray()
{
	delete[] m_array;
}

/*
 * std::string
*/

template <>
class MyArray<std::string> final
{
public:
	friend std::ostream& operator<< (std::ostream& os_, const MyArray<std::string>& ma_)
	{
		os_ << ma_.m_N << " elements:\n";
		for (size_t i = 0; i < ma_.m_N; ++i) {
			os_ << "\t [" << i << "] = \"" << ma_.m_array[i] << "\"\n";
		}

		return os_;
	}

	MyArray(size_t _N);
	~MyArray();

private:
	size_t m_N;
	std::string* m_array;
};

inline MyArray<std::string>::MyArray(size_t _N)
	: m_N{ _N }, m_array{ new std::string[m_N] }
{
}

inline MyArray<std::string>::~MyArray()
{
	delete[] m_array;
}

/*
 * int
*/

template <>
class MyArray<int> final
{
public:
	friend std::ostream& operator<< (std::ostream& os_, const MyArray<int>& ma_)
	{
		os_ << ma_.m_N << " elements:\n";
		for (size_t i = 0; i < ma_.m_N; ++i) {
			os_ << "\t [" << i << "] = " << ma_.m_array[i] << "\n";
		}

		return os_;
	}

	MyArray(size_t _N);
	~MyArray();

private:
	size_t m_N;
	int* m_array;
};

inline MyArray<int>::MyArray(size_t _N)
	: m_N{ _N }, m_array{ new int[m_N] }
{
	for (size_t i = 0; i < m_N; ++i) {
		m_array[i] = 0;
	}
}

inline MyArray<int>::~MyArray()
{
	delete[] m_array;
}
