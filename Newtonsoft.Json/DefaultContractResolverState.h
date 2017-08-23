#pragma once

#include "..\System\Collections\Generic\Dictionary<Newtonsoft\Json\Serialization\ResolverContractKey,Newtonsoft\Json\Serialization\JsonContract>.h"
#include "..\Newtonsoft\Json\Utilities\PropertyNameTable.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class DefaultContractResolverState : public Object // 0x0
	{
	public:
		System::Collections::Generic::Dictionary<Newtonsoft::Json::Serialization::ResolverContractKey,Newtonsoft::Json::Serialization::JsonContract> ContractCache; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		Newtonsoft::Json::Utilities::PropertyNameTable* NameTable; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
