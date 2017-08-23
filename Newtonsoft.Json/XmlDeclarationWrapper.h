#pragma once

#include "..\System\Xml\XmlDeclaration.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XmlDeclarationWrapper : public XmlNodeWrapper // 0x28
	{
	public:
		System::Xml::XmlDeclaration* _declaration; // 0x28 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x30
}
