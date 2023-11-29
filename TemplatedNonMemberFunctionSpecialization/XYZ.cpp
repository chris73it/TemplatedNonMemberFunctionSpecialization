#include "XYZ.h"

XYZ::XYZ()
	: m_f{ 1.1 }
{
}

std::ostream& operator<< (std::ostream& os_, const XYZ& xyz_)
{
	os_ << xyz_.m_f;

	return os_;
}