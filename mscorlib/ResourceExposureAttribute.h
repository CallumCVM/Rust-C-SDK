#pragma once

#include "..\System\Runtime\Versioning\ResourceScope.h"

namespace System
{
	namespace Runtime
{
{
		namespace Versioning
{
	class ResourceExposureAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::Versioning::ResourceScope exposure; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
