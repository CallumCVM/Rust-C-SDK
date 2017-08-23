#pragma once

#include "..\Newtonsoft\Json\Bson\BsonString.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonRegex : public BsonToken // 0x20
	{
	public:
		Newtonsoft::Json::Bson::BsonString* <Pattern>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Bson::BsonString* <Options>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
