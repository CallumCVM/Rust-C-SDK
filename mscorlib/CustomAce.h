#pragma once

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class CustomAce : public GenericAce // 0x20
	{
	public:
		unsigned char* opaque; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
