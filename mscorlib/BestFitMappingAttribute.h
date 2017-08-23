#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class BestFitMappingAttribute : public Attribute // 0x0
	{
	public:
		bool bfm; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool ThrowOnUnmappableChar; // 0x11 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x18
}
