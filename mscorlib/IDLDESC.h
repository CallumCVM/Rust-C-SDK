#pragma once

#include "..\System\Runtime\InteropServices\ComTypes\IDLFLAG.h"

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
	class IDLDESC : public ValueType // 0x0
	{
	public:
		__int64 dwReserved; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		System::Runtime::InteropServices::ComTypes::IDLFLAG wIDLFlags; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
