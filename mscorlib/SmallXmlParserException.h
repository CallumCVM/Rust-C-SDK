#pragma once

namespace Mono
{
	namespace Xml
{
	class SmallXmlParserException : public SystemException // 0x60
	{
	public:
		int line; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int column; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
