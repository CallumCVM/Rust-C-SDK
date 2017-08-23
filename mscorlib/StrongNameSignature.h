#pragma once

namespace rust 
{
	class StrongNameSignature : public Object // 0x0
	{
	public:
		unsigned char* hash; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* signature; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int signaturePosition; // 0x20 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int signatureLength; // 0x24 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int metadataPosition; // 0x28 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int metadataLength; // 0x2c (size: 0x4, flags: 0x1, type: 0x9)
		unsigned char cliFlag; // 0x30 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned int cliFlagPosition; // 0x34 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x38
}
