#pragma once

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Director
{
	class PlayableHandle : public ValueType // 0x0
	{
	public:
		__int64 m_Handle; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		int m_Version; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x20
}
