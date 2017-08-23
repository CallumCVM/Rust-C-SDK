#pragma once

#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class OidCollection : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* _list; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool _readOnly; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
