#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
{
{
			namespace MacOsStructs
{
	class sockaddr : public ValueType // 0x0
	{
	public:
		unsigned char sa_len; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sa_family; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x18
}
