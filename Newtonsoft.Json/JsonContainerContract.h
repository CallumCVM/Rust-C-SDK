#pragma once

#include "..\Newtonsoft\Json\Serialization\JsonContract.h"
#include "..\Newtonsoft\Json\JsonConverter.h"
#include "..\System\Nullable<Newtonsoft\Json\ReferenceLoopHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\TypeNameHandling>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonContainerContract : public JsonContract // 0x80
	{
	public:
		Newtonsoft::Json::Serialization::JsonContract* _itemContract; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::JsonContract* _finalItemContract; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::JsonConverter* <ItemConverter>k__BackingField; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System.Nullable<bool> <ItemIsReference>k__BackingField; // 0x98 (size: 0x2, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::ReferenceLoopHandling> <ItemReferenceLoopHandling>k__BackingField; // 0x9c (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::TypeNameHandling> <ItemTypeNameHandling>k__BackingField; // 0xa4 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0xb0
}
