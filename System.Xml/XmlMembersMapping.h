#pragma once

#include "..\System\Xml\Serialization\XmlMemberMapping.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlMembersMapping : public XmlMapping // 0x48
	{
	public:
		System::Xml::Serialization::XmlMemberMapping* _mapping; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _hasWrapperElement; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
