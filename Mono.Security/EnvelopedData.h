#pragma once

#include "..\Mono\Security\PKCS7\ContentInfo.h"
#include "..\System\Collections\ArrayList.h"

namespace rust 
{
	class EnvelopedData : public Object // 0x0
	{
	public:
		Mono::Security::PKCS7::ContentInfo* _content; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::PKCS7::ContentInfo* _encryptionAlgorithm; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _recipientInfos; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* _encrypted; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char _version; // 0x30 (size: 0x1, flags: 0x1, type: 0x5)
	}; // size = 0x38
}
