#pragma once

#include "..\System\Xml\Linq\XNode.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XNode : public XObject // 0x40
	{
	public:
		System::Xml::Linq::XNode* previous; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XNode* next; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
