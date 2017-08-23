#pragma once

#include "..\Facepunch\Steamworks\Interop\ServerRules\StdVTable\InternalRulesResponded.h"
#include "..\Facepunch\Steamworks\Interop\ServerRules\StdVTable\InternalRulesFailedToRespond.h"
#include "..\Facepunch\Steamworks\Interop\ServerRules\StdVTable\InternalRulesRefreshComplete.h"

namespace rust 
{
	class StdVTable : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Interop::ServerRules::StdVTable::InternalRulesResponded* m_VTRulesResponded; // 0x10 (size: 0x8, flags: 0x1006, type: 0x12)
		Facepunch::Steamworks::Interop::ServerRules::StdVTable::InternalRulesFailedToRespond* m_VTRulesFailedToRespond; // 0x18 (size: 0x8, flags: 0x1006, type: 0x12)
		Facepunch::Steamworks::Interop::ServerRules::StdVTable::InternalRulesRefreshComplete* m_VTRulesRefreshComplete; // 0x20 (size: 0x8, flags: 0x1006, type: 0x12)
	}; // size = 0x28
}
