#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaValidationException : public XmlSchemaException // 0x80
	{
	public:
		System::Object source_object; // 0x80 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x88
}
