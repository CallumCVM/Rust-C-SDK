#pragma once

#include "..\UnityEngine\Transform.h"
#include "LTRect.h"
#include "..\UnityEngine\Vector3.h"
#include "TweenAction.h"
#include "LeanTweenType.h"
#include "..\LTDescr\EaseTypeDelegate.h"
#include "..\LTDescr\ActionMethodDelegate.h"
#include "..\UnityEngine\SpriteRenderer.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\Sprite.h"
#include "LTDescrOptional.h"

namespace rust 
{
	class LTDescr : public Object // 0x0
	{
	public:
		UnityEngine::Transform* trans; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		LTRect* ltRect; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		LTDescr::EaseTypeDelegate* easeMethod; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		LTDescr::ActionMethodDelegate* <easeInternal>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		LTDescr::ActionMethodDelegate* <initInternal>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::SpriteRenderer* spriteRen; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RectTransform* rectTransform; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* uiText; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* uiImage; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* rawImage; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* sprites; // 0x60 (size: 0x8, flags: 0x6, type: 0x1d)
		LTDescrOptional* _optional; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		bool toggle; // 0x70 (size: 0x1, flags: 0x6, type: 0x2)
		bool useEstimatedTime; // 0x71 (size: 0x1, flags: 0x6, type: 0x2)
		bool useFrames; // 0x72 (size: 0x1, flags: 0x6, type: 0x2)
		bool useManualTime; // 0x73 (size: 0x1, flags: 0x6, type: 0x2)
		bool usesNormalDt; // 0x74 (size: 0x1, flags: 0x6, type: 0x2)
		bool hasInitiliazed; // 0x75 (size: 0x1, flags: 0x6, type: 0x2)
		bool hasExtraOnCompletes; // 0x76 (size: 0x1, flags: 0x6, type: 0x2)
		bool hasPhysics; // 0x77 (size: 0x1, flags: 0x6, type: 0x2)
		bool onCompleteOnRepeat; // 0x78 (size: 0x1, flags: 0x6, type: 0x2)
		bool onCompleteOnStart; // 0x79 (size: 0x1, flags: 0x6, type: 0x2)
		bool useRecursion; // 0x7a (size: 0x1, flags: 0x6, type: 0x2)
		float ratioPassed; // 0x7c (size: 0x4, flags: 0x6, type: 0xc)
		float passed; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		float delay; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		float time; // 0x88 (size: 0x4, flags: 0x6, type: 0xc)
		float speed; // 0x8c (size: 0x4, flags: 0x6, type: 0xc)
		float lastVal; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		unsigned int _id; // 0x94 (size: 0x4, flags: 0x1, type: 0x9)
		int loopCount; // 0x98 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int counter; // 0x9c (size: 0x4, flags: 0x6, type: 0x9)
		float direction; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
		float directionLast; // 0xa4 (size: 0x4, flags: 0x6, type: 0xc)
		float overshoot; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		float period; // 0xac (size: 0x4, flags: 0x6, type: 0xc)
		float scale; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		bool destroyOnComplete; // 0xb4 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 fromInternal; // 0xb8 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 toInternal; // 0xc4 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 diff; // 0xd0 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 diffDiv2; // 0xdc (size: 0xc, flags: 0x3, type: 0x11)
		TweenAction type; // 0xe8 (size: 0x4, flags: 0x6, type: 0x11)
		LeanTweenType easeType; // 0xec (size: 0x4, flags: 0x1, type: 0x11)
		LeanTweenType loopType; // 0xf0 (size: 0x4, flags: 0x6, type: 0x11)
		bool hasUpdateCallback; // 0xf4 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xf8
}
