// Developed by YangGaeng Team.

#pragma once

#include "../../YangGaeng/YangGaeng.h"
#include "GameFramework/Actor.h"
#include "InteractBase.generated.h"

UCLASS()
class YANGGAENGINTERACT_API AInteractBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// 중심 Component가 될 Scene Component
	UPROPERTY(VisibleAnywhere, Category = Base)
		USceneComponent* Scene;

	// 실제 배치할 물체 - Static Mesh
	UPROPERTY(VisibleAnywhere, Category = Base)
		UStaticMeshComponent* SM_Mesh;

	// 실제 배치할 물체 - Skeletal Mesh
	UPROPERTY(VisibleAnywhere, Category = Base)
		USkeletalMeshComponent* SK_Mesh;

	// 물체를 배치할 때, 겹치지 않기 위한 박스 컬리전
	UPROPERTY(VisibleAnywhere, Category = Base)
		UBoxComponent* Box;

	UPROPERTY(VisibleAnywhere, Category = Custom_Base)
		int32 dbc;

protected:

	// Mesh에 연결할 클래스
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Custom_Base)
		TSubclassOf<class UStaticMesh> CustomMesh;

	// Temp
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Custom_Temp)
		int32 abc;

private:

	// 스켈레탈 메시 또는 스태틱 메시 사용 여부
	bool bIsUsingStaticMesh;

};
