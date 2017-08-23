#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Principal\WindowsAccountType.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"

namespace System
{
	namespace Security
{
{
		namespace Principal
{
	class WindowsIdentity : public Object // 0x0
	{
	public:
		__int64 _token; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		UnityEngine::UnicodeString* _type; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Principal::WindowsAccountType _account; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		bool _authenticated; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* _name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Serialization::SerializationInfo* _info; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
