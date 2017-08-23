#pragma once

#include "..\System\Security\Policy\Evidence.h"
#include "..\System\IO\DirectoryInfo.h"

namespace System
{
	namespace IO
{
{
		namespace IsolatedStorage
{
	class IsolatedStorageFile : public IsolatedStorage // 0x38
	{
	public:
		bool _resolved; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned __int64 _maxSize; // 0x40 (size: 0x8, flags: 0x1, type: 0xb)
		System::Security::Policy::Evidence* _fullEvidences; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::DirectoryInfo* directory; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
