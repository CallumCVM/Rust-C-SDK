#pragma once

#include "..\System\Reflection\Assembly.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class Hash : public Object // 0x0
	{
	public:
		System::Reflection::Assembly* assembly; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* data; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _md5; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		unsigned char* _sha1; // 0x28 (size: 0x8, flags: 0x3, type: 0x1d)
	}; // size = 0x30
}
