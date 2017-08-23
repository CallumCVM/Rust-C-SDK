#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ActivatedServiceTypeEntry : public TypeEntry // 0x20
	{
	public:
		System::Type* obj_type; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
