#pragma once

#include "..\System\Runtime\Versioning\ResourceScope.h"

namespace System
{
	namespace Runtime
{
{
		namespace Versioning
{
	class ResourceConsumptionAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::Versioning::ResourceScope resource; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::Versioning::ResourceScope consumption; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
