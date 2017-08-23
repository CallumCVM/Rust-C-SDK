#pragma once

#include "..\System\Guid.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class ObjectAccessRule : public AccessRule // 0x30
	{
	public:
		System::Guid object_type; // 0x30 (size: 0x10, flags: 0x1, type: 0x11)
		System::Guid inherited_object_type; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
