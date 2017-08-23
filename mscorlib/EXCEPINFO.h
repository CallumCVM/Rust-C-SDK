#pragma once

#include "..\System\Int16.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
{
{
			namespace ComTypes
{
	class EXCEPINFO : public ValueType // 0x0
	{
	public:
		System::Int16 wCode; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 wReserved; // 0x12 (size: 0x2, flags: 0x6, type: 0x6)
		UnityEngine::UnicodeString* bstrSource; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* bstrDescription; // 0x20 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* bstrHelpFile; // 0x28 (size: 0x8, flags: 0x1006, type: 0xe)
		int dwHelpContext; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		__int64 pvReserved; // 0x38 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 pfnDeferredFillIn; // 0x40 (size: 0x8, flags: 0x6, type: 0x18)
		int scode; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x50
}
