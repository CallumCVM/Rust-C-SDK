#pragma once

#include "..\Mono\Xml\Schema\XsdIdentityPath.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Xml\Schema\XsdIdentityField.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdIdentitySelector : public Object // 0x0
	{
	public:
		Mono::Xml::Schema::XsdIdentityPath* selectorPaths; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* fields; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdIdentityField* cachedFields; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
