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
	class FILETIME : public ValueType // 0x0
	{
	public:
		int dwLowDateTime; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int dwHighDateTime; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
