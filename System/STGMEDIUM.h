#pragma once

#include "..\System\Object.h"
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
	class STGMEDIUM : public ValueType // 0x0
	{
	public:
		System::Object pUnkForRelease; // 0x10 (size: 0x8, flags: 0x1006, type: 0x1c)
		System::Runtime::InteropServices::ComTypes::TYMED tymed; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		__int64 unionmember; // 0x20 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x28
}
