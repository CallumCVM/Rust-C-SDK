#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class KeySizes : public Object // 0x0
	{
	public:
		int _maxSize; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int _minSize; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int _skipSize; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
