#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Object.h"
#include "..\System\Nullable<Newtonsoft\Json\ReferenceLoopHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\TypeNameHandling>.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonContainerAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Id>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Title>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Description>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* <ItemConverterType>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* <ItemConverterParameters>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System.Nullable<bool> _isReference; // 0x38 (size: 0x2, flags: 0x3, type: 0x15)
		System.Nullable<bool> _itemIsReference; // 0x3a (size: 0x2, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x3c (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling; // 0x44 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0x50
}
