#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdIDManager : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* idList; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* missingIDReferences; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* thisElementId; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
