#pragma once

#include "..\System\Runtime\InteropServices\ComTypes\TYPEDESC.h"
#include "..\System\Runtime\InteropServices\ComTypes\ELEMDESC\DESCUNION.h"

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
	class ELEMDESC : public ValueType // 0x0
	{
	public:
		System::Runtime::InteropServices::ComTypes::TYPEDESC tdesc; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::ComTypes::ELEMDESC::DESCUNION desc; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
