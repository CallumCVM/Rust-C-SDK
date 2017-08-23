#pragma once

#include "..\System\Xml\Linq\XNode.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XContainer : public XNode // 0x50
	{
	public:
		System::Xml::Linq::XNode* first; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XNode* last; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
