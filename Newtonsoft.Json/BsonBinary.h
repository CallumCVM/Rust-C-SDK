#pragma once

#include "..\Newtonsoft\Json\Bson\BsonBinaryType.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonBinary : public BsonValue // 0x30
	{
	public:
		Newtonsoft::Json::Bson::BsonBinaryType <BinaryType>k__BackingField; // 0x30 (size: 0x1, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
