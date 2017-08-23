#pragma once

#include "..\System\Runtime\InteropServices\ComTypes\ADVF.h"
#include "..\System\Runtime\InteropServices\ComTypes\IAdviseSink.h"
#include "..\System\Runtime\InteropServices\ComTypes\FORMATETC.h"

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
	class STATDATA : public ValueType // 0x0
	{
	public:
		System::Runtime::InteropServices::ComTypes::ADVF advf; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::IAdviseSink* advSink; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int connection; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		System::Runtime::InteropServices::ComTypes::FORMATETC formatetc; // 0x28 (size: 0x20, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
