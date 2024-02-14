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

};
