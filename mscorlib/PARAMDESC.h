#pragma once

#include "..\System\Runtime\InteropServices\ComTypes\PARAMFLAG.h"

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
	class PARAMDESC : public ValueType // 0x0
	{
	public:
		__int64 lpVarValue; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		System::Runtime::InteropServices::ComTypes::PARAMFLAG wParamFlags; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
