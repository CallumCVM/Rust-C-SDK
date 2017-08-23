#pragma once

#include "..\Apex\Serialization\Json\IJsonWriter.h"

namespace Apex
{
	namespace Serialization
{
{
		namespace Json
{
	class StagedToJson : public ValueType // 0x0
	{
	public:
		Apex::Serialization::Json::IJsonWriter* _json; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
