#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class ComEventInterfaceAttribute : public Attribute // 0x0
	{
	public:
		System::Type* si; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* ep; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
