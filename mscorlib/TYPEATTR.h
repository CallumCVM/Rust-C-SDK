#pragma once

#include "..\System\Guid.h"
#include "..\System\Runtime\InteropServices\ComTypes\TYPEKIND.h"
#include "..\System\Int16.h"
#include "..\System\Runtime\InteropServices\ComTypes\TYPEFLAGS.h"
#include "..\System\Runtime\InteropServices\ComTypes\TYPEDESC.h"
#include "..\System\Runtime\InteropServices\ComTypes\IDLDESC.h"

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
	class TYPEATTR : public ValueType // 0x0
	{
	public:
		System::Guid guid; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		int lcid; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int dwReserved; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int memidConstructor; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int memidDestructor; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		__int64 lpstrSchema; // 0x30 (size: 0x8, flags: 0x6, type: 0x18)
		int cbSizeInstance; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		System::Runtime::InteropServices::ComTypes::TYPEKIND typekind; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
		System::Int16 cFuncs; // 0x40 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 cVars; // 0x42 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 cImplTypes; // 0x44 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 cbSizeVft; // 0x46 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 cbAlignment; // 0x48 (size: 0x2, flags: 0x6, type: 0x6)
		System::Runtime::InteropServices::ComTypes::TYPEFLAGS wTypeFlags; // 0x4c (size: 0x4, flags: 0x6, type: 0x11)
		System::Int16 wMajorVerNum; // 0x50 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 wMinorVerNum; // 0x52 (size: 0x2, flags: 0x6, type: 0x6)
		System::Runtime::InteropServices::ComTypes::TYPEDESC tdescAlias; // 0x58 (size: 0x10, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::IDLDESC idldescType; // 0x68 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x78
}
