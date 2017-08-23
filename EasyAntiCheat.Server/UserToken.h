#pragma once

namespace EasyAntiCheat
{
	namespace Server
{
{
		namespace Legacy
{
{
{
			namespace Protocol
{
	class UserToken : public Object // 0x0
	{
	public:
		unsigned char* Token; // 0x10 (size: 0x8, flags: 0x23, type: 0x1d)
	}; // size = 0x18
}
