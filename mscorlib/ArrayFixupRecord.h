#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class ArrayFixupRecord : public BaseFixupRecord // 0x30
	{
	public:
		int _index; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
