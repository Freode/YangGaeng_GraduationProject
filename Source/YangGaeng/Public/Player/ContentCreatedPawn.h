// Developed by YangGaeng Team.

#pragma once

#include "../../YangGaeng.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"

#include "ContentCreatedPawn.generated.h"

UCLASS()
class YANGGAENG_API AContentCreatedPawn : public APawn
{
	GENERATED_BODY()

// =================== FUNCTION ===================
public:
	// Sets default values for this pawn's properties
	AContentCreatedPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Move Action에 바인딩할 함수
	void Move(const FInputActionValue& Value);

	// Spin Action에 바인딩할 함수
	void Spin(const FInputActionValue& Value);

	// Zoom Action에 바인딩할 함수
	void Zoom(const FInputActionValue& Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

// =================== PROPERTY ===================
public:

	// 루트 컴포넌트 역할
	UPROPERTY(VisibleAnywhere, Category = Component)
		USceneComponent* MainScene;

	// 카메라 길이 조절 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Component)
		USpringArmComponent* CameraBoom;

	// 카메라 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Component)
		UCameraComponent* Camera;

protected:
	// ===== Input System =====
	
	// Default Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UInputMappingContext> DefaultMappingContext;

	// Move
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = true))
		TObjectPtr<class UInputAction> MoveAction;

	// Spin
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = true))
		TObjectPtr<class UInputAction> SpinAction;

	// Zoom
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, Meta = (AllowPrivateAccess = true))
		TObjectPtr<class UInputAction> ZoomAction;

	// DragMove

};
