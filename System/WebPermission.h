#pragma once

#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Net
{
	class WebPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Collections::ArrayList* m_acceptList; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* m_connectList; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool m_noRestriction; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
