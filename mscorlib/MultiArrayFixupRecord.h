#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class MultiArrayFixupRecord : public BaseFixupRecord // 0x30
	{
	public:
		int* _indices; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x38
}
