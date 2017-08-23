#pragma once

#include "..\System\Configuration\Internal\IInternalConfigHost.h"

namespace System
{
	namespace Configuration
{
{
		namespace Internal
{
	class DelegatingConfigHost : public Object // 0x0
	{
	public:
		System::Configuration::Internal::IInternalConfigHost* host; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
