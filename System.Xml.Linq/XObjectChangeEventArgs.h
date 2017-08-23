#pragma once

#include "..\System\Xml\Linq\XObjectChange.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XObjectChangeEventArgs : public EventArgs // 0x0
	{
	public:
		System::Xml::Linq::XObjectChange type; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
