#pragma once

#include "..\System\IO\IsolatedStorage\IsolatedStorageScope.h"
#include "..\System\Object.h"

namespace System
{
	namespace IO
{
{
		namespace IsolatedStorage
{
	class IsolatedStorage : public MarshalByRefObject // 0x18
	{
	public:
		System::IO::IsolatedStorage::IsolatedStorageScope storage_scope; // 0x18 (size: 0x4, flags: 0x3, type: 0x11)
		System::Object _assemblyIdentity; // 0x20 (size: 0x8, flags: 0x3, type: 0x1c)
		System::Object _domainIdentity; // 0x28 (size: 0x8, flags: 0x3, type: 0x1c)
		System::Object _applicationIdentity; // 0x30 (size: 0x8, flags: 0x3, type: 0x1c)
	}; // size = 0x38
}
