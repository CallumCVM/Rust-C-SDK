#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\InteropServices\ComTypes\VARDESC\DESCUNION.h"
#include "..\System\Runtime\InteropServices\ComTypes\ELEMDESC.h"
#include "..\System\Int16.h"
#include "..\System\Runtime\InteropServices\ComTypes\VARKIND.h"

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
	class VARDESC : public ValueType // 0x0
	{
	public:
		int memid; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* lpstrSchema; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Runtime::InteropServices::ComTypes::VARDESC::DESCUNION desc; // 0x20 (size: 0x8, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::ELEMDESC elemdescVar; // 0x28 (size: 0x20, flags: 0x6, type: 0x11)
		System::Int16 wVarFlags; // 0x48 (size: 0x2, flags: 0x6, type: 0x6)
		System::Runtime::InteropServices::ComTypes::VARKIND varkind; // 0x4c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
