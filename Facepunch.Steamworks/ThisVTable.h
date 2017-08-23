#pragma once

#include "..\Facepunch\Steamworks\Interop\ServerRules\ThisVTable\InternalRulesResponded.h"
#include "..\Facepunch\Steamworks\Interop\ServerRules\ThisVTable\InternalRulesFailedToRespond.h"
#include "..\Facepunch\Steamworks\Interop\ServerRules\ThisVTable\InternalRulesRefreshComplete.h"

namespace rust 
{
	class ThisVTable : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Interop::ServerRules::ThisVTable::InternalRulesResponded* m_VTRulesResponded; // 0x10 (size: 0x8, flags: 0x1006, type: 0x12)
		Facepunch::Steamworks::Interop::ServerRules::ThisVTable::InternalRulesFailedToRespond* m_VTRulesFailedToRespond; // 0x18 (size: 0x8, flags: 0x1006, type: 0x12)
		Facepunch::Steamworks::Interop::ServerRules::ThisVTable::InternalRulesRefreshComplete* m_VTRulesRefreshComplete; // 0x20 (size: 0x8, flags: 0x1006, type: 0x12)
	}; // size = 0x28
}
