#pragma once

#include "..\System\Guid.h"
#include "..\System\Runtime\InteropServices\ComTypes\SYSKIND.h"
#include "..\System\Int16.h"
#include "..\System\Runtime\InteropServices\ComTypes\LIBFLAGS.h"

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
	class TYPELIBATTR : public ValueType // 0x0
	{
	public:
		System::Guid guid; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		int lcid; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		System::Runtime::InteropServices::ComTypes::SYSKIND syskind; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
		System::Int16 wMajorVerNum; // 0x28 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 wMinorVerNum; // 0x2a (size: 0x2, flags: 0x6, type: 0x6)
		System::Runtime::InteropServices::ComTypes::LIBFLAGS wLibFlags; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
