#pragma once

#include "..\Mono\Xml\Schema\XsdIdentityPath.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdIdentityField : public Object // 0x0
	{
	public:
		Mono::Xml::Schema::XsdIdentityPath* fieldPaths; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int index; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
