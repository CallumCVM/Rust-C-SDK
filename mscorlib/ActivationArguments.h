#pragma once

#include "..\System\ActivationContext.h"
#include "..\System\ApplicationIdentity.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Hosting
{
	class ActivationArguments : public Object // 0x0
	{
	public:
		System::ActivationContext* _context; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ApplicationIdentity* _identity; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** _data; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
