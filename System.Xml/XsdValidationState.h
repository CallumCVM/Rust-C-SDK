#pragma once

#include "..\Mono\Xml\Schema\XsdParticleStateManager.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdValidationState : public Object // 0x0
	{
	public:
		Mono::Xml::Schema::XsdParticleStateManager* manager; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		int occured; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
