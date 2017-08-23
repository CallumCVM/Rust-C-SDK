#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\IList.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ProviderData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Ref; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* Type; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* Id; // 0x20 (size: 0x8, flags: 0x3, type: 0xe)
		System::Collections::Hashtable* CustomProperties; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::IList* CustomData; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x38
}
