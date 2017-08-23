#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\WellKnownObjectMode.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class WellKnownServiceTypeEntry : public TypeEntry // 0x20
	{
	public:
		System::Type* obj_type; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* obj_uri; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Remoting::WellKnownObjectMode obj_mode; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
