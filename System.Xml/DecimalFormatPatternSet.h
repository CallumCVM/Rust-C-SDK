#pragma once

#include "..\Mono\Xml\Xsl\DecimalFormatPattern.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class DecimalFormatPatternSet : public Object // 0x0
	{
	public:
		Mono::Xml::Xsl::DecimalFormatPattern* positivePattern; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::DecimalFormatPattern* negativePattern; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
