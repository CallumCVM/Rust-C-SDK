#pragma once

#include "..\System\ComponentModel\EditorBrowsableState.h"

namespace System
{
	namespace ComponentModel
{
	class EditorBrowsableAttribute : public Attribute // 0x0
	{
	public:
		System::ComponentModel::EditorBrowsableState state; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
