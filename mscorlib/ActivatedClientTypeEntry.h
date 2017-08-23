#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ActivatedClientTypeEntry : public TypeEntry // 0x20
	{
	public:
		UnityEngine::UnicodeString* applicationUrl; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* obj_type; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
