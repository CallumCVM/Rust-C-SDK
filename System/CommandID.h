#pragma once

#include "..\System\Guid.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class CommandID : public Object // 0x0
	{
	public:
		int cID; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		System::Guid guid; // 0x14 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
