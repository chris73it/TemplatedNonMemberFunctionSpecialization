#pragma once
#include <iostream>

class XYZ
{
public:
	XYZ();
	virtual ~XYZ() = default;

	friend std::ostream& operator<< (std::ostream& os_, const XYZ& xyz_);

private:
	float m_f;
};
