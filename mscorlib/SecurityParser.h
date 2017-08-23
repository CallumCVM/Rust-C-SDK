#pragma once

#include "..\System\Security\SecurityElement.h"
#include "..\System\Collections\Stack.h"

namespace Mono
{
	namespace Xml
{
	class SecurityParser : public SmallXmlParser // 0x68
	{
	public:
		System::Security::SecurityElement* root; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::SecurityElement* current; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* stack; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x80
}
