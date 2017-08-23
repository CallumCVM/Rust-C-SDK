#pragma once

#include "..\System\Nullable<Newtonsoft\Json\NullValueHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\DefaultValueHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\ReferenceLoopHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\ObjectCreationHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\TypeNameHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\Required>.h"
#include "..\System\Type.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonPropertyAttribute : public Attribute // 0x0
	{
	public:
		System::Type* <ItemConverterType>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* <ItemConverterParameters>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* <PropertyName>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Nullable<Newtonsoft::Json::NullValueHandling> _nullValueHandling; // 0x28 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling; // 0x30 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling; // 0x38 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling; // 0x40 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::TypeNameHandling> _typeNameHandling; // 0x48 (size: 0x8, flags: 0x3, type: 0x15)
		System.Nullable<bool> _isReference; // 0x50 (size: 0x2, flags: 0x3, type: 0x15)
		System.Nullable<int> _order; // 0x54 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::Required> _required; // 0x5c (size: 0x8, flags: 0x3, type: 0x15)
		System.Nullable<bool> _itemIsReference; // 0x64 (size: 0x2, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x68 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling; // 0x70 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0x78
}
