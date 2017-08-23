#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
{
{
			namespace Extensions
{
	class BasicConstraintsExtension : public X509Extension // 0x28
	{
	public:
		bool cA; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int pathLenConstraint; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
