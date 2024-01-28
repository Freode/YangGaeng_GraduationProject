// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

// YangGaeng 로그 카테고리를 매크로로 선언
DECLARE_LOG_CATEGORY_EXTERN(YangGaeng, Log, All);

// ========== 로그 형식 추가 ==========

// 현재 매크로를 호출한 함수 이름과 위치(라인)을 출력
#define YGLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))

// 현재 매크로를 호출한 함수 이름과 위치 출력 방식을 추가로 설정해서 해당 매크로를 호출해 출력
#define YGLOG_SIMPLE(Verbosity) UE_LOG(YangGaeng, Verbosity, TEXT("%s"), *YGLOG_CALLINFO)

// 현재 매크로를 호출한 함수 이름과 위치 출력 방식과 함께 사용자가 입력한 문자열 형식이 포함되어 해당 매크로를 호출해 출력
#define YGLOG(Verbosity, Format, ...) UE_LOG(YangGaeng, Verbosity, TEXT("%s %s"), *YGLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

// 조건이 거짓이면, 지정된 반환값이나 코드 조각을 실행하고 현재 함수에서 즉시 반환
#define YGCHECK(Expr, ...) {if(!(Expr)) { YGLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__; }}