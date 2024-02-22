// Developed by YangGaeng Team.

#pragma once

#include "../../YangGaeng.h"
#include "GameFramework/Actor.h"
#include "EstablishBase.generated.h"

// 상호작용하는 객체의 종류 열거형
UENUM(BlueprintType)
enum class EEstablishType : uint8
{
	DEFAULT,
	STATIC_MESH,
	SKELETAL_MESH
};

UCLASS()
class YANGGAENG_API AEstablishBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstablishBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 중심 Component가 될 Scene Component
	UPROPERTY(VisibleAnywhere, Category = Base)
		USceneComponent* Scene;

	// 물체를 배치할 때, 겹치지 않기 위한 박스 컬리전
	UPROPERTY(VisibleAnywhere, Category = Base)
		UBoxComponent* Box;

	// 상호작용할 기본 종류
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Base)
		EEstablishType EstablishType;

protected:

	// 현재 객체가 차지하고 있는 공간 설정
	UFUNCTION(BlueprintCallable, Category = Base)
		void SetBoxArea(const FVector& Origin, const FVector& BoxExtent);

	// 공간 크기 재설정 단계
	UPROPERTY(BlueprintReadOnly, Category = Base)
		float ResizeStep = 100.0f;

	// 공간 크기 조정
	UPROPERTY(BlueprintReadOnly, Category = Base)
		float ResizeGap = 0.0f;

};
