#pragma once

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class DescendantOrSelfIterator : public SimpleIterator // 0x40
	{
	public:
		int _depth; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		bool _finished; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
