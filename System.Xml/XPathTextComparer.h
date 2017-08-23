#pragma once

#include "..\System\Xml\XPath\XmlCaseOrder.h"
#include "..\System\Globalization\CultureInfo.h"

namespace rust 
{
	class XPathTextComparer : public Object // 0x0
	{
	public:
		System::Globalization::CultureInfo* _ci; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int _nMulSort; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _nMulCase; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		System::Xml::XPath::XmlCaseOrder _orderCase; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
