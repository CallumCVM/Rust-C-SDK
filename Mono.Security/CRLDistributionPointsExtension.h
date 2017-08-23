#pragma once

#include "..\System\Collections\ArrayList.h"

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
	class CRLDistributionPointsExtension : public X509Extension // 0x28
	{
	public:
		System::Collections::ArrayList* dps; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
