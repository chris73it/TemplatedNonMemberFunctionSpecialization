#pragma once
#include <iostream>

class XYZ
{
public:
	XYZ();
	virtual ~XYZ() = default;

	friend std::ostream& operator<< (std::ostream& os_, const XYZ& xyz_);
	//{
	//	os_ << m_f << "\n";

	//	return os_;
	//}

private:
	float m_f;
};
