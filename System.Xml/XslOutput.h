#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\Mono\Xml\Xsl\OutputMethod.h"
#include "..\System\Text\Encoding.h"
#include "..\Mono\Xml\Xsl\StandaloneType.h"
#include "..\System\Collections\ArrayList.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslOutput : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* uri; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* customMethod; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* version; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::Encoding* encoding; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* doctypePublic; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* doctypeSystem; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* cdataSectionElements; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* indent; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* mediaType; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* stylesheetVersion; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* cdSectsList; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::OutputMethod method; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		bool omitXmlDeclaration; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		Mono::Xml::Xsl::StandaloneType standalone; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x78
}
