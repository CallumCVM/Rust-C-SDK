#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class WellKnownClientTypeEntry : public TypeEntry // 0x20
	{
	public:
		System::Type* obj_type; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* obj_url; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* app_url; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
