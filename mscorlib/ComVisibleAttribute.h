#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class ComVisibleAttribute : public Attribute // 0x0
	{
	public:
		bool Visible; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
