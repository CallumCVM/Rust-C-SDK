#pragma once

#include "..\Mono\Xml\Schema\XsdValidationState.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdAppendedValidationState : public XsdValidationState // 0x20
	{
	public:
		Mono::Xml::Schema::XsdValidationState* head; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdValidationState* rest; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
