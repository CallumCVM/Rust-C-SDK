#pragma once

namespace rust 
{
	class BaseScriptableObject : public ScriptableObject // 0x18
	{
	public:
		unsigned int FilenameStringId; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
