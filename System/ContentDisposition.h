#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Specialized\StringDictionary.h"

namespace System
{
	namespace Net
{
{
		namespace Mime
{
	class ContentDisposition : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* dispositionType; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Specialized::StringDictionary* parameters; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
