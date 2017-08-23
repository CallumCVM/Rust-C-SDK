#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
{
{
			namespace ComTypes
{
	class DISPPARAMS : public ValueType // 0x0
	{
	public:
		__int64 rgvarg; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 rgdispidNamedArgs; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		int cArgs; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int cNamedArgs; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
