#pragma once

#include "..\System\Int16.h"
#include "..\System\Runtime\InteropServices\ComTypes\DVASPECT.h"
#include "..\System\Runtime\InteropServices\ComTypes\TYMED.h"

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
	class FORMATETC : public ValueType // 0x0
	{
	public:
		System::Int16 cfFormat; // 0x10 (size: 0x2, flags: 0x1006, type: 0x6)
		System::Runtime::InteropServices::ComTypes::DVASPECT dwAspect; // 0x14 (size: 0x4, flags: 0x1006, type: 0x11)
		int lindex; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		__int64 ptd; // 0x20 (size: 0x8, flags: 0x6, type: 0x18)
		System::Runtime::InteropServices::ComTypes::TYMED tymed; // 0x28 (size: 0x4, flags: 0x1006, type: 0x11)
	}; // size = 0x30
}
