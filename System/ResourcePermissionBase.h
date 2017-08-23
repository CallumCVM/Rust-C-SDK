#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class ResourcePermissionBase : public CodeAccessPermission // 0x0
	{
	public:
		System::Collections::ArrayList* _list; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** _tags; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _unrestricted; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
