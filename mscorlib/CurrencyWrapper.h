#pragma once

#include "..\System\Decimal.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class CurrencyWrapper : public Object // 0x0
	{
	public:
		System::Decimal currency; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
