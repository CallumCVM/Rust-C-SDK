#pragma once

#include "..\System\IO\IsolatedStorage\IsolatedStorageScope.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
{
		namespace IsolatedStorage
{
	class IsolatedStorageFileEnumerator : public Object // 0x0
	{
	public:
		System::IO::IsolatedStorage::IsolatedStorageScope _scope; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString** _storages; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int _pos; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
