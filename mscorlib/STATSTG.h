#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\InteropServices\ComTypes\FILETIME.h"
#include "..\System\Guid.h"

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
	class STATSTG : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* pwcsName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		int type; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		__int64 cbSize; // 0x20 (size: 0x8, flags: 0x6, type: 0xa)
		System::Runtime::InteropServices::ComTypes::FILETIME mtime; // 0x28 (size: 0x8, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::FILETIME ctime; // 0x30 (size: 0x8, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::FILETIME atime; // 0x38 (size: 0x8, flags: 0x6, type: 0x11)
		int grfMode; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		int grfLocksSupported; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		System::Guid clsid; // 0x48 (size: 0x10, flags: 0x6, type: 0x11)
		int grfStateBits; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int reserved; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x60
}
