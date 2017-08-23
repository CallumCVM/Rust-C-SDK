#pragma once

#include "..\System\Runtime\InteropServices\ComTypes\FUNCKIND.h"
#include "..\System\Runtime\InteropServices\ComTypes\INVOKEKIND.h"
#include "..\System\Runtime\InteropServices\ComTypes\CALLCONV.h"
#include "..\System\Int16.h"
#include "..\System\Runtime\InteropServices\ComTypes\ELEMDESC.h"

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
	class FUNCDESC : public ValueType // 0x0
	{
	public:
		int memid; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		__int64 lprgscode; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 lprgelemdescParam; // 0x20 (size: 0x8, flags: 0x6, type: 0x18)
		System::Runtime::InteropServices::ComTypes::FUNCKIND funckind; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::INVOKEKIND invkind; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::CALLCONV callconv; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		System::Int16 cParams; // 0x34 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 cParamsOpt; // 0x36 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 oVft; // 0x38 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 cScodes; // 0x3a (size: 0x2, flags: 0x6, type: 0x6)
		System::Runtime::InteropServices::ComTypes::ELEMDESC elemdescFunc; // 0x40 (size: 0x20, flags: 0x6, type: 0x11)
		System::Int16 wFuncFlags; // 0x60 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x68
}
